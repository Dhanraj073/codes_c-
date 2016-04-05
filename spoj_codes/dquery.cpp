#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n))
	{
		int arr[n],copy[n];
		for(int i=0;i<n;i++)
		 scanf("%d",&arr[i]);
		int q;
		scanf("%d",&q);
		while(q--)
		{
			int count=1,temp;
			for(int i=0;i<n;i++)
			copy[i]=arr[i];
			int a,b;
			scanf("%d%d",&a,&b);
			sort(copy+a,copy+b);
			temp=copy[a-1];
			for(int i=a;i<b;i++)
			{
				if(copy[i]!=temp)
				{
					count++;
					temp=copy[i];
				}
			}
			printf("%d\n",count);
		}
	}
	return 0;
}
