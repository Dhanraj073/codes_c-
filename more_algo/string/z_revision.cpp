#include<bits/stdc++.h>
using namespace std;

int z[234567];
void compute(string str)
{
	int len=str.length();
	for(int i=0;i<=len;i++)
	z[i]=0;
	for(int i=1;i<len;i++)
	{
		while(i+z[i]<len && str[z[i]]==str[z[i]+i])
		++z[i];
	}
}

int main()
{
	string str;
	while(cin>>str)
	{
		compute(str);
		for(int i=0;i<str.length();i++)
		cout<<z[i]<<" ";
		cout<<endl;
	}
}
