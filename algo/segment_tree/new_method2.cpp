//interval update from [l,r)
//single query at that position

#include<bits/stdc++.h>
using namespace std;
int tree[23690],n;

void build()
{
	for(int i=n-1;i>=0;i--)
	tree[i]=tree[i>>1]+tree[i>>1|1];
}

void modify(int l,int r,int val)
{
	for(l+=n,r+=n;l<r;l>>=1,r>>=1)
	{
		if(l&1)
		tree[l++]+=val;
		if(r&1)
		tree[--r]+=val;
	}
}

int query(int p)
{
	int res=0;
	for(p+=n;p>0;p>>=1)
	res+=tree[p];
	return res;
}

void push()
{
	for(int i=1;i<n;i++)
	{
		tree[i<<1]+=tree[i];
		tree[i<<1|1]+=tree[i];
		tree[i]=0;
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>tree[n+i];
	build();
	int q;
	cin>>q;
	while(q--)
	{
		int a;
		cin>>a;
		if(a==1)
		{
			int a,b,c;
			cin>>a>>b>>c;
			modify(a,b,c);
			push();
			for(int i=n;i<2*n;i++)
			cout<<tree[i]<<" ";
			cout<<endl;
		}
		if(a==2)
		{
			int p;
			cin>>p;
			cout<<query(p)<<endl;
		}
	}
}

