#include<iostream>
using namespace std;

long int josephus(long int n,long int k)
{
    long int a,i;
    a=0;
    for(i=2;i<=n;i++)
        a=(a+k)%i;
    return (a+1);
}

int main()
{
long int N,K,ans;
cin>>N>>K;
while(N!=0 || K!=0)
{
ans=josephus(N,K);
cout<<N<<" "<<K<<" "<<ans<<endl;
cin>>N>>K;
}
return 0;
}

