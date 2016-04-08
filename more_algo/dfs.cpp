#include<bits/stdc++.h>
using namespace std;
vector<int>myvect[123456];
bool visited[123456];
void dfs(int pos)
{
	stack<int>mystack;
	visited[pos]=true;
	mystack.push(pos);
	while(!mystack.empty())
	{
		int ele=mystack.top();
		cout<<ele<<" ";
		mystack.pop();
		for(int i=0;i<myvect[ele].size();i++)
		{
			if(!visited[myvect[ele][i]])
			{
				visited[myvect[ele][i]]=true;
				mystack.push(myvect[ele][i]);
			}
		}
	}
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		myvect[x].push_back(y);
		myvect[y].push_back(x);
	}
	for(int i=0;i<=n;i++)
	visited[i]=false;
	for(int i=1;i<=n;i++)
	{
		if(visited[i]==false)
		dfs(i);
	}
}

