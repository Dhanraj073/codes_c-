#include<bits/stdc++.h>
using namespace std; 
 
string s1,s2,s3,s4,s5; 
int conv(string s) 
{ 
    int ret=0; 
    for(int i=0;i<s.length();i++) 
    { 
        if(!isdigit(s[i])) 
		return -1; 
        ret=ret*10+(s[i]-'0'); 
    } 
    return ret; 
} 
int main() 
{ 
    int cases,v1,v2,v3; 
    cin>>cases; 
    while(cases--) 
    { 
        cin>>s1>>s2>>s3>>s4>>s5; 
        v1=conv(s1); 
        v2=conv(s3); 
        v3=conv(s5); 
        if(v1<0) 
		v1=v3-v2; 
        if(v2<0) 
		v2=v3-v1; 
        if(v3<0) 
		v3=v1+v2; 
        cout<<v1<<" + "<<v2<<" = "<<v3<<endl; 
    } 
    return 0; 
}


