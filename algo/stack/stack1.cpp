#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	stack<char> mystack;
	int len=0,flg=1;
	while(len<str.length())
	{
		if(str[len]=='{' || str[len]=='(' || str[len]=='[')
		mystack.push(str[len]);
		else if(str[len]==']')
		{
			if(mystack.top()=='[')
			mystack.pop();
			else
			{
				flg=0;
				break;
			}
		}
		else if(str[len]=='}')
		{
			if(mystack.top()=='{')
			mystack.pop();
			else
			{
				flg=0;
				break;
			}
		}
		else if(str[len]==')')
		{
			if(mystack.top()=='(')
			mystack.pop();
			else
			{
				flg=0;
				break;
			}
		}
		len++;
	}
//	cout<<mystack.size()<<endl;
	if(flg==1 && mystack.size()==0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
