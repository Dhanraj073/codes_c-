#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		long long n;
		long double sum1=0,sum2=0;
		int a,b,c,d;
		cin>>n>>a>>b>>c>>d;
		if(n==1)
		cout<<d<<endl;
		else
		{
		long long arr[n];
		arr[0]=d;
		sum2=d;
		for(int i=1;i<n;i++)
		{
			arr[i]=((a*arr[i-1]*arr[i-1])+(b*arr[i-1])+c)%1000000;
			if(i&1)
			sum1+=arr[i];
			else
			sum2+=arr[i];
		}
		cout<<abs(sum2-sum1)<<endl;
	}
}
	return 0;
	
}
