#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int n=str.length();
	int arr[n];
	memset(arr,0,sizeof(arr));
	for(int i=1;i<n;i++)
	{
		int j=arr[i-1];
		while(j>0 && str[j]!=str[i])
		j=arr[j-1];
		if(str[i]==str[j])
		j++;
		arr[i]=j;
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
