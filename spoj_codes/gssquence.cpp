#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n,cont,flag=1;
		scanf("%d",&n);
		long long arr[n];
		for(int i=0;i<n;i++)
		scanf("%lld",&arr[i]);
		for(int i=0;i<n;i++)
		{
			cont=count(arr,arr+n,arr[i]);
			if(cont>2)
			{
			   flag=0;
			   break;
	    	}
		}
		if(flag)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
