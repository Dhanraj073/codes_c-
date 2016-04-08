#include<bits/stdc++.h>
using namespace std;
int main()
{
	string text,result="";
	string pat;
	cin>>text;
	cin>>pat;
	result+=pat;
	result+=text;
	int len=result.length();
//	cout<<len<<endl;
	vector<long long>z(len,0);
	long long l=0,r=0;
//	cout<<result<<endl;
	for(long long i=1;i<len;i++)
	{
		if(i<=r)
		z[i]=min(r-i+1,z[i-l]);
		while(i+z[i]<len && result[z[i]]==result[i+z[i]])
		z[i]++;
		if(i+z[i]-1>r)
		{
			l=i;
			r=z[i]+i-1;
		}
	}
//	for(int i=0;i<len;i++)
//	cout<<z[i]<<" ";
//	cout<<endl;
	int ans=0;
	for(int i=pat.length();i<len;i++)
	{
		if(z[i]>=pat.length())
		{
		//	cout<<i-pat.length()<<" ";
			ans++;
		}
	}
//	cout<<endl;
	cout<<ans<<endl;
}
