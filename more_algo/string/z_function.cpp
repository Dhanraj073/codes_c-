#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int arr[str.length()];
	memset(arr,0,sizeof(arr));
	int l=0,r=0;
	for(int i=1;i<str.length();i++)
	{
		if(i<=r)
		arr[i]=min(r-i+1,arr[i-l]);
		while(i+arr[i]<str.length() && str[arr[i]]==str[i+arr[i]])
		arr[i]++;
		if(i+arr[i]-1>r)
		{
			l=i;
			r=i+arr[i]-1;
		}
	}
	for(int i=0;i<str.length();i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
