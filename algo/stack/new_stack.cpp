#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	stack<int>mystack1,mystack2;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		if(i==0)
		{
			mystack1.push(num);
			mystack2.push(num);
		}
		else
		{
			if(num>mystack2.top())
			{
				mystack2.push(mystack2.top());
				mystack1.push(num);
			}
			else
			{
				mystack1.push(num);
				mystack2.push(num);
			}
		}
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a;
		if(a==1)
		{
			cout<<mystack2.top()<<endl;
		}
		else
		{
			cin>>b;
			mystack1.push(b);
			if(b>mystack2.top())
			mystack2.push(mystack2.top());
			else
			mystack2.push(b);
		}
	}
}
