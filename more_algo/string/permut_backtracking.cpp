#include<bits/stdc++.h>
using namespace std;
string str;

void swap(char *l,char *r)
{
	char temp=*l;
	*l=*r;
	*r=temp;
}
void function(string str,int l,int r)
{
	if(l==r)
	cout<<str<<endl;
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap(str[l],str[i]);
			function(str,l+1,r);
			swap(str[l],str[i]);
		}
	}
}

int main()
{
	cin>>str;
	int n=str.length();
	function(str,0,n-1);
}
