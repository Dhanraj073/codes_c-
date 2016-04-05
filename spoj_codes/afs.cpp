#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define si(t) scanf("%d",&t)
#define PL(a) printf("%lld\n",a)
#define mx6   1000007
ll arr1[mx6+10],ar[mx6+10];
void fun(){
        for (ll i = 2; i <mx6; i++)
          {
          	for(ll j=2;j<=sqrt(i);j++)
          	{
          		if(i%j==0)
          		(j==i/j)?arr1[i]=j:arr1[i]=j+i/j;
          	}
          }
        }
void solve()
{
    ar[0]=0;
    ar[1]=0;
    for(int i=2;i<mx6;i++)
    
    {
        ar[i]=ar[i-1]+arr1[i]+1;
    }
}
int main()
{
    fun();
    solve();
    int t;
    si(t);
    while(t--)
    {
        int n;
        si(n);
        PL(ar[n]);
    }
    return 0;
}

