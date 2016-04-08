#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int graph[n+1][n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j)
			graph[i][j]=0;
			else
			graph[i][j]=324567;
		}
	}
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		graph[a][b]=c;
	}
	int dist[n+1][n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			dist[i][j]=graph[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				dist[j][k]=min(dist[j][k],dist[j][i]+dist[i][k]);
			}
		}
	}
	int query;
	cin>>query;
	while(query--)
	{
		int a,b;
		cin>>a>>b;
		if(a==b)
		cout<<"0"<<endl;
		else if(dist[a][b]==324567 && a!=b)
		cout<<"-1"<<endl;
		else
		cout<<dist[a][b]<<endl;
	}
}
