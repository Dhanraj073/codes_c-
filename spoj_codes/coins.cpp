#include<iostream>
#include <map>
#include <algorithm>
using namespace std;
map<long int, long long int> mp;

long long int function(int n)
{
    if(n==0) return 0;
    
    if(mp[n]!=0) return mp[n];
    
    long long ans=function(n/2)+function(n/3)+function(n/4);
    if(ans>n) mp[n]=ans;
    else mp[n]=n;
    return mp[n];
}
int main()
{    
    long int n;    
    while(cin>>n) 
    {
       cout<<function(n);
     }
    return 0;
}
