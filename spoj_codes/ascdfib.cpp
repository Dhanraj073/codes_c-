#include<iostream>
using namespace std;
long long int arr[1000000]={0};
long long int fib(int n)
{
	long long int val;
	arr[2]=1;
	arr[1]=0;
	if(n>2)
	{
	for(int i=3;i<=n;i++)
	arr[i]=(arr[i-1]+arr[i-2])%100000;
	val=arr[n];
	return val;
    }
    else
    {
    	val=arr[n];
	return val;
     }
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int x;
		cin>>x;
		long long int ans=fib(x);
		cout<<ans<<endl;
	}
	return 0;
}
