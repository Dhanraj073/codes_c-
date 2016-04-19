#include<bits/stdc++.h>
using namespace std;
vector<pair<long long,long long> >myvect[310];
long long arr[301][301],dp[301][301];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		cin>>arr[i][j];
	}
	int m;
	cin>>m;
	while(m--)
	{
		long long a,b,c;
		cin>>a>>b>>c;
		if(arr[a][b]>c)
		{
			arr[a][b]=c;
			arr[b][a]=c;
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				dp[i][j]=arr[i][j];
			}
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					long long temp1=arr[i][a]+arr[a][b]+arr[b][j];
					long long temp2=arr[i][b]+arr[b][a]+arr[a][j];
					dp[i][j]=min(temp2,min(dp[i][j],temp1));
				}
			}
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				arr[i][j]=dp[i][j];
			}
		}
		long long temp=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j++)
			temp+=arr[i][j];
		}
		cout<<temp<<" ";
	}
	cout<<endl;
}
