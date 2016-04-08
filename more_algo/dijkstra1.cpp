#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000001LL
long long dist[102345],pred[102345];
vector<pair<long long,long long> >graph[102345];
int main()
{
    long long n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        a--;
        b--;
        graph[a].push_back(make_pair(b,c));
        graph[b].push_back(make_pair(a,c));
    }
    for(int i=0;i<n;i++)
    {
        dist[i]=INF;
        pred[i]=-1;
    }
    set <pair<long long ,long long> > Q;
    Q.insert(make_pair (0,0));
    dist[0] = 0;
    while (!Q.empty())
    {
        int v = Q.begin()->second;
        Q.erase(Q.begin());
        for (int i=0;i<graph[v].size();i++)
        {
            long long to= graph[v][i].first;
            long long weight=graph[v][i].second;
            if (dist[v]+ weight<dist[to])
            {
                Q.erase(make_pair(dist[to],to));
                dist[to] = dist[v] +weight;
                pred[to] = v;
                Q.insert (make_pair (dist[to], to));
            }
        }
    }
  //    cout<<"111"<<endl;
  //    for(int i=0;i<n;i++)
  //    cout<<dist[i]<<" ";
  //    cout<<endl;
    if (dist[n-1] ==INF)
    cout<<"-1"<<endl;
    else
    {
        int st= n-1;
        vector<long long> res;
        res.push_back(st);  
        while(pred[st]!=-1)
        {
            st=pred[st];
            res.push_back(st);
        }
        for(int i=res.size()-1;i>=0;i--)
        cout<<res[i]+1<<" ";
        cout<<endl;
    } 
}
