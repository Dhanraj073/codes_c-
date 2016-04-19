#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	stack<int>mystack;
	mystack.push(arr[0]);
	for(int i=1;i<n;i++)
	{
		int next=arr[i];
		if(mystack.empty()==false)
		{
			int ele=mystack.top();
			mystack.pop();
			while(ele<next)
			{
				cout<<ele<<" "<<next<<endl;
				if(mystack.empty()==true)
				break;
				ele=mystack.top();
				mystack.pop();
			}
			if(ele >next)
			mystack.push(ele);
		}
		mystack.push(next);
	}
	while(mystack.empty()==false)
	{
		int ele=mystack.top();
		mystack.pop();
		int next=-1;
		cout<<ele<<" "<<next<<endl;
	}
}
