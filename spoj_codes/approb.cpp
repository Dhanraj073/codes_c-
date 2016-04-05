#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	long long int test,n,ans,ans1,ans2;
	scanf("%ld",&test);
	while(test--)
	{
		scanf("%ld",&n);
		if(n&1)
		{
			ans2=6*n*n*n;
			ans1= ((3*n+1)/2)*(n+1)/2 +(((3*n)-1)/2 *(n-1)/2);
			ans=gcd(ans1,ans2);
			
			cout<<ans1/ans<<"/"<<ans2/ans<<endl;
		}
		else
		{
			cout<<"1/"<<4*n<<endl;	
		}
	}
	return 0;
}
