#include <bits/stdc++.h>
using namespace std;
int tree[123456];
void build(int a[],int v,int tl,int tr)
{
	if(tl==tr)
	tree[v]=a[tl];
	else
	{
		int mid=(tl+tr)/2;
		build(a,2*v,tl,mid);
		build(a,(2*v)+1,mid+1,tr);
		tree[v]=tree[v+v]+tree[v+v+1];
	}
}

int sum(int v,int tl,int tr,int l,int r)
{
	if(l>r)
	return 0;
	if(l==tl && r==tr)
	return tree[v];
	int mid=(tl+tr)/2;
	return sum(v+v,tl,mid,l,min(r,mid)) + sum(v+v+1,mid+1,tr,max(l,mid+1),r);
}

void update(int v,int tl,int tr,int pos,int new_val)
{
	if(tl==tr)
	tree[v]=new_val;
	int mid=(tl+tr)/2;
	if(pos<=mid)
	update(v+v,tl,mid,pos,new_val);
	else
	update(v+v+1,mid+1,tr,pos,new_val);
	tree[v]=tree[v+v]+tree[v+v+1];
}

int main() 
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	build(arr,1,0,8);
	int query;
	cin>>query;
	while(query--)
	{
		int a,b;
		cin>>a>>b;
		int ans=sum(1,0,8,a-1,b-1);
		cout<<ans<<endl;
	}
	// your code goes here
	return 0;
}
