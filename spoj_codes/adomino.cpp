#include <bits/stdc++.h>
using namespace std;
int binaryseacrh()
{
	
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n,D;
		scanf("%d%d",&n,&D);
		long long a,b,arr[n-1];
		cin>>a;
		for(int i=0;i<n-1;i++)
		{
			cin>>b;
			arr[i]=b-a;
			a=b;
		}
		for(int i=0;i<n-1;i++)
		{
			cout<<arr[i]<<" ";
		}
	}
}
