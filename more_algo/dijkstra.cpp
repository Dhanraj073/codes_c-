#include <bits/stdc++.h>
using namespace std;
const int INF = 100000007;
int adj[3001][3001],V,dist[3001];
void dijkstra(int start)
{
    for(int i=0;i<3001;i++)
    dist[i]=INF;
    dist[start]=0;
    pair<int,int>curr;
    set<pair<int,int> >minPQ;
    minPQ.insert(make_pair(0,start));
    while(!minPQ.empty())
    {
        curr = *minPQ.begin();
        minPQ.erase(minPQ.begin());
        if(dist[curr.second]<curr.first)
        continue;
        for(int i=1;i<=V;i++) 
        {
            if(dist[i]>=adj[curr.second][i]+curr.first) 
            {
                dist[i]=adj[curr.second][i]+curr.first;
                minPQ.insert(make_pair(dist[i],i));
            }
        }
    }
}
int main()
{
    int start,E,t;
    cin>>t;
    while(t--) 
    {
        cin>>V>>E;
        for(int i=0;i<3001;i++) 
        {
            for(int j=0;j<3001;j++)
            {
                adj[i][j]=INF;
            }
        }
        for(int i =1;i<=E;i++) 
        {
        	int from,to,cost;
            cin>>from>>to>>cost;
            adj[from][to] = adj[to][from] = min(adj[from][to], cost);
        }
        cin>>start;
        dijkstra(start);
        for(int i=1;i<=V;i++) 
        {
            if(i!=start) 
            {
                if(dist[i]!=INF)
                cout<<dist[i]<<" ";
                else 
                cout<<"-1 ";
            }
        }
        cout<<endl;
    }
}
