#include<bits/stdc++.h>
using namespace std;
int main()
{
	//z-function calcaulation
	// maximum matching of ith suffix from the prefix
	string str;
	cin>>str;
	int n=str.length();
	vector<int>myvect(n,0),arr(n,0);
	
	//O(n^2) implementation
	for(int i=1;i<n;i++)
	{
		while(i<n && str[myvect[i]]==str[myvect[i]+i])
		myvect[i]++;
	}
	
	//O(n) implementation
	int L=0,R=0;
	for(int i=1;i<n;i++)
	{
		if(i>R)
		{
			L=i;
			R=i;
			while(R<n && str[R-L]==str[R])
			R++;
			arr[i]=R-L;
			R--;
		}
		else
		{
			int k=i-L;
			if(arr[k]<R-i+1)
			arr[i]=arr[k];
			else
			{
				L=i;
				while(R<n && str[R-L]==str[R])
				R++;
				arr[i]=R-L;
				R--;
			}
		}
	}
	
	
	for(int i=0;i<n;i++)
	cout<<myvect[i]<<" ";
	cout<<endl;
	
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
