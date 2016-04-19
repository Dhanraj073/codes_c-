
//single point update
//interval query
//query result into ans of [l,r)
//updation is made at that point itself
#include<bits/stdc++.h>   
using namespace std;
int tree[24690],n;

void build()
{
	for(int i=n-1;i>=0;i--)
	{
		tree[i]=tree[i<<1]+tree[i<<1|1];
	}
}

void modify(int p,int val)
{
	p+=n;
	for(tree[p]=val;p>1;p>>=1)
	tree[p>>1]=tree[p]+tree[p^1];
}

int query(int l,int r)
{
	int res=0;
	for(l+=n,r+=n;l<r;l>>=1,r>>=1)
	{
		if(l&1)
		res+=tree[l++];
		if(r&1)
		res+=tree[--r];
	}
	return res;
}

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>tree[n+i];
	build();
	for(int i=0;i<2*n;i++)
	cout<<tree[i]<<" ";
	cout<<endl;
	int q;
	cin>>q;
	while(q--)
	{
		int a;
		cin>>a;
		if(a==1)
		{
			int b,c;
			cin>>b>>c;
			modify(b,c);  //modify at position b . 0-based indexing
		}
		else if(a==2)
		{
			int b,c;
			cin>>b>>c;
			cout<<"xxxxx"<<endl;
			int res=query(b,c);
			cout<<res<<endl;
		}
	}
}
