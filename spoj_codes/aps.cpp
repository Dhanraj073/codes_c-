#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define si(t) scanf("%d",&t)
#define PL(a) printf("%lld\n",a)
#define mx7   10000007
ll arr1[mx7+10],ar[mx7+10];
bool prime[mx7+10];
void sieve(){
        for (ll i = 2; i <=mx7; i+= 2)
          {
           prime[i]=1, arr1[i] = 2;
          }
        for (ll i = 3; i <=mx7; i += 2){
                if (!prime[i]){
                    arr1[i] = i;
                    for (ll j=i; (j*i) <=mx7; j += 2)
                    {
                        prime[j*i] = 1;
                        if(!arr1[j*i])
                        arr1[j*i] = i;
                    }
                }
        }
}
void solve()
{
    ar[0]=0;
    ar[1]=0;
    for(int i=2;i<=mx7;i++)
    {
        ar[i]=ar[i-1]+arr1[i];
    }
}
int main()
{
    sieve();
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

