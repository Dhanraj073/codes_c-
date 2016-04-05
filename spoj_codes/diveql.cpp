#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007;
long gcd(long a,long b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n,p;
		long ans,result,ans1=1,ans2=1;
		scanf("%d%d",&n,&p);
			for(int i=1;i<n;i++)
			ans1=ans1*p % MOD;
			ans2=((ans1*p)-1 ) %MOD;
			ans1=ans1*(p-1) %MOD;
			result=gcd(ans2,ans1);
			cout<<ans2/result<<" "<<ans1/result<<endl;
	}
}
