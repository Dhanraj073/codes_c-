#include<bits/stdc++.h>
using namespace std;
#define MAXN 500
int n;
vector<int> g[MAXN];
bool used[MAXN];
vector<int> ans;

void dfs(int v)
{
	used[v]=true;
	for(int i=0;i<g[v].size();i++)
	{
		int to =g[v][i];
		if(!used[to])
		dfs(to);
	}
	ans.push_back(v);
}

void topological_sort()
{
	for(int i=0;i<n;i++)
	used[i]=false;
	ans.clear();
	for(int i=0;i<n;i++)
	{
		if(!used[i])
		dfs(i);
	}
	reverse(ans.begin(),ans.end());
}
int main()
{
	cin>>n;
	for(int i=0;i<(n-1)*2;i++)
	{
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		g[x].push_back(y);
	}
	topological_sort();
	for(int i=0;i<ans.size();i++)
	cout<<ans[i]<<" ";
	cout<<endl;
}
