#include<bits/stdc++.h>
using namespace std;
int lps[123456];
void build_lps(string pat)
{
	int len_maxi=pat.length();
	lps[0]=0;
	int i=1,len=0;
	while(i<len_maxi)
	{
		if(pat[i]==pat[len])
		{
			len++;
			lps[i]=len;
			i++;
		}
		else
		{
			if(len!=0)
			len=lps[len-1];
			else
			{
				lps[i]=0;
				i++;
			}
		}
	}
}

void kmp_search(string txt,string pat)
{
	int N=txt.length();
	int M=pat.length();
	int i=0,j=0;
	while(i<N)
	{
		if(pat[j]==txt[i])
		{
			j++;
			i++;
		}
		if(j==M)
		{
			cout<<"pattern is at"<<i-j<<endl;
			j=lps[j-1];
		}
		else if(i<N && pat[j]!=txt[i])
		{
			if(j!=0)
			j=lps[j-1];
			else
			i=i+1;
		}
	}
}

int main()
{
	string pat,str;
	cin>>str>>pat;
	build_lps(pat);
	for(int i=0;i<pat.length();i++)
	cout<<lps[i]<<" ";
	cout<<endl;
	kmp_search(str,pat);
}
