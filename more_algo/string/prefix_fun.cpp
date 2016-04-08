#include<bits/stdc++.h>
using namespace std;
int pi[213456];
string str;
void compute()
{
	int len=str.length();
	for(int i=0;i<=len;i++)
	pi[i]=0;
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(str.substr(0,j)==str.substr(i-j+1,j))
			pi[i]=j;
		}
	}
}

void compute2()
{
	int len=str.length();
	for(int i=0;i<=len;i++)
	pi[i]=0;
	for(int i=1;i<len;i++)
	{
		int j=pi[i-1];
		while(j>0 && str[j]!=str[i])
		j=pi[j-1];
		if(str[i]==str[j])
		j++;
		pi[i]=j;
	}
}
int main()
{
	cin>>str;
	compute();
	for(int i=0;i<str.length();i++)
	cout<<pi[i]<<" ";
	cout<<endl;
	
	compute2();
	for(int i=0;i<str.length();i++)
	cout<<pi[i]<<" ";
	cout<<endl;
}
