#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n,m,d;
		int ans=0;
		scanf("%d%d%d",&n,&m,&d);
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]>d)
			ans++;
		}
		
		if(ans>=m)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
