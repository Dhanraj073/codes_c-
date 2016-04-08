#include<bits/stdc++.h>
#define INF 999999
using namespace std;
int dist[12345];
bool comp(const int& u, const int& v)
{
    if(dist[u] != dist[v])
    return dist[u] < dist[v];
    return u < v;
}
int main()
{
    int N,M,S,ans=0;
    cin>>N>>M;
    vector<pair<int,int> >G[N+1];
    vector<pair<int,int> >::iterator it;
    for(int i=0;i<N;i++)
    dist[i] = INF;
    for(int i=0;i<M;i++)
   	{
   		int x,y,r;
        cin>>x>>y>>r;
        G[x-1].push_back(make_pair(y-1,r));
        G[y-1].push_back(make_pair(x-1,r));
    }
    cin>>S;
    dist[S-1] = 0;
    set<int> mstSet;
    vector<int> V;
    for(int i=0;i<N;i++)
    V.push_back(i);
    while(!V.empty())
   	{
        sort(V.begin(),V.end(),comp);
        int v = *(V.begin());
        mstSet.insert(v);
        for(it = G[v].begin(); it != G[v].end(); it++)
        {
            if(mstSet.find(it->first)!= mstSet.end())
            continue;
            int u = it->first;
            int d = it->second;
            dist[u]=min(dist[u],d);
        }
        V.erase(V.begin());
    }
    for(int i=0;i<N;i++)
    ans += dist[i];
    cout<<ans<<endl;
}
