#include<bits/stdc++.h>
using namespace std;
vector<int>myvect[123456];
bool visited[123456];

void bfs(int pos)
{
	queue<int>myqueue;
	visited[pos]=true;
	myqueue.push(pos);
	while(!myqueue.empty())
	{
		int ele=myqueue.front();
		cout<<ele<<" ";
		myqueue.pop();
		for(int i=0;i<myvect[ele].size();i++)
		{
			if(!visited[myvect[ele][i]])
			{
				visited[myvect[ele][i]]=true;
				myqueue.push(myvect[ele][i]);
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
	for(int i=1;i<=n;i++)
	visited[i]=false;
	for(int i=1;i<=n;i++)
	if(visited[i]==false)
	bfs(i);
}
