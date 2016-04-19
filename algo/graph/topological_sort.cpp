#include<bits/stdc++.h>
using namespace std;
vector<int>myvect[123456];
bool visited[123456];
vector<int > ans;
int n;
bool dfs(int pos)
{
	stack<int>mystack;
	visited[pos]=true;
	mystack.push(pos);
	while(!mystack.empty())
	{
		int ele=mystack.top();
		mystack.pop();
		for(int i=0;i<myvect[ele].size();i++)
		{
			if(!visited[myvect[ele][i]])
			{
				visited[myvect[ele][i]]=true;
				dfs(myvect[ele][i]);
			}
		}
		ans.push_back(ele);
	}
}

void topological_sort(int n)
{
	memset(visited,-1,sizeof(visited));
	ans.clear();
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
		dfs(i);
	}
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		myvect[x].push_back(y);
		myvect[y].push_back(x);
	}
	topological_sort(n);
	reverse(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
	cout<<ans[i]<<" ";
	cout<<endl;
}
