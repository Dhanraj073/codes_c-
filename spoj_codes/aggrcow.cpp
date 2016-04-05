#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

int n,m;
int *a,*diff;

int result(int x)
{
	int pre=diff[0],c=0;
	for(int i=1;i<n;i++)
	{
		if(diff[i]>=x)
		{
			c++;
			pre=diff[i];
		}
	}
	if(c>=m)
	return 1;
	else
	return 0;
}

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		scanf("%d%d",&n,&m);
		m--;
		a=new int[n+1]; a[0]=0;
		diff=new int[n];
		for(int i=1;i<=n;i++)
		 {
		 scanf("%d",&a[i]);
		 diff[i]=a[i]-a[i-1];
     	}
		sort(diff,diff+n);
		int low=0,high=diff[n-1],mid;
		while(low<=high)
		{
			mid=(low+high)/2;
			if(result(mid))
			low=mid+1;
			else
			high=mid-1;
		}
		cout<<low-1<<endl;
	}
	return 0;
}
