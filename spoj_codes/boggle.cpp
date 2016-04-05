#include<stdio.h>
#include<iostream>
#include<cstring>
#include<map>
#include<sstream>

using namespace std;
int main()
{
int max,count=0;
int n;
int arr[10]={0,1,1,1,1,2,3,5,11,11};
scanf("%d",&n);

string s[n+9],st;
getline(cin,st);
for(int i=0;i<n;i++)
getline(cin,s[i]);

map<string ,int> mp;
map<string ,int> :: iterator t;
string str;
for(int i=0;i<n;i++)
{
istringstream iss(s[i]);
while(iss>>str)
{
t=mp.find(str);
if((*t).second==1)
{
if((*t).first.size()>7)
count +=11;
else
 count+=arr[(*t).first.size()];
}
}
if(max<count)
max=count;
}
cout<<max<<endl;
return 0;
}

