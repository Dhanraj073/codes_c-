#include<bits/stdc++.h>
using namespace std;
#define MAX_Q 200000
#define MAX_N 80000
#define MAX_VAL 1000023+1
int q,ans[MAX_Q],n,a[MAX_N],tree[MAX_N],visit[MAX_VAL];

struct dq
{
    int ind,s,e;
    dq(){};
    dq(int ind, int s, int e) : ind(ind), s(s), e(e) {};
    bool operator < (dq E)const
    {
        return e<E.e;
    }
}qarr[MAX_Q];

void update(int idx, int val)
{
    for(;idx<=n;idx += (idx & -idx)) 
	tree[idx] += val;
}

int query(int idx)
{
    int sum = 0;
    for(;idx>0;idx -= (idx & -idx))
	 sum += tree[idx];
    return sum;
}

void solve()
{
    sort(qarr,qarr+q);    
    int pos = 0,tot = 0;
   
    memset(visit,-1,sizeof(visit));
    memset(tree,0,sizeof(tree));
    
    for(int i = 0;i<n;++i)
	{
        if(visit[a[i]]!=-1)
		update(visit[a[i]],-1);
        else 
        ++tot;
        
        update(i+1,1);
        visit[a[i]] = i+1;
        
        while(pos<q && qarr[pos].e==i+1)
		{
            ans[qarr[pos].ind] = tot-query(qarr[pos].s-1);
            ++pos;
        }
    }
}

int main()
{
	scanf("%d",&n);
    for(int i = 0;i<n;++i)
	scanf("%d",&a[i]);
    scanf("%d",&q);
    for(int i = 0;i<q;++i)
	{
		int x,y;
        scanf("%d %d",&x,&y);
        qarr[i] = dq(i,x,y);
    }
    solve();
    for(int i = 0;i<q;++i)
    printf("%d\n",ans[i]);
}
