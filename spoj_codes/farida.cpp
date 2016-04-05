#include<iostream>
#include<algorithm>
using namespace std;
long long dp[10001];
int main()
{
	int test;
	cin>>test;
	for(int i=1;i<=test;i++)
	{
		int n;
		cin>>n;
		long long arr[n+1];
		dp[0]=0;
		arr[0]=0;
		cin>>arr[1];
		dp[1]=arr[1];
		if(n==1)
		cout<<"Case "<<i<<": "<<arr[1]<<endl;
		else
		{
		for(int j=2;j<=n;j++)
		{
			cin>>arr[j];
			dp[j]=max(dp[j-2]+arr[j],dp[j-1]);
		}
		sort(dp,dp+n+1);
		cout<<"Case "<<i<<": "<<dp[n]<<endl;
	     }
	 }
	  return 0;
}
