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

void compute2(string str)
{
	int len=str.length();
	for(int i=0;i<=len;i++)
	z[i]=0;
	int l=0,r=0;
	for(int i=1;i<len;i++)
	{
		if(i<=r)
		z[i]=min(z[i-l],r+1-i);
		else
		{
			while(i+z[i]<len && str[z[i]]==str[z[i]+i])
			++z[i];
			if(i+z[i]-1>r)
			{
				r=i+z[i]-1;
				l=i;
			}
		}
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
		
		
		compute2(str);
		for(int i=0;i<str.length();i++)
		cout<<z[i]<<" ";
		cout<<endl;
	}
}



