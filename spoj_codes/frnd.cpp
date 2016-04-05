#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	scanf("%d",&test);
	long long arr[test];
	long long sum=0;
	if(test==1)
	{
		cin>>arr[0];
		cout<<arr[0]<<endl;
	}
	else
	{
	for(int i=0;i<test;++i)
	scanf("%lld",&arr[i]);
	for(int i=0;i<test-1;++i)
	for(int j=i+1;j<test;++j)
	{
		sum+=arr[i]^arr[j];
	}
	printf("%lld\n",sum);
   }
	return 0;
}
