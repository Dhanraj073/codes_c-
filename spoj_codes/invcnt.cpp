#include<iostream>
#include<cstdio>
#include<sstream>
#include<string.h>
using namespace std;
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		long int n,count,j;
		scanf("%ld",&n);
		long arr[n];
		for(long int i=0;i<n;i++)
		cin>>arr[i];
		string s;
		getline(cin,s);
		count=0;
		for(long int i=1,j=i-1;i<n,j<i;i++,j--)
		{
				if(arr[j]>arr[i])
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
	
}
