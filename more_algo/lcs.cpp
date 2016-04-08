#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m],lcs[n+1][m+1];
//	memset(lcs,0,sizeof(lcs));
	for(int i=0;i<n;i++)
	cin>>arr1[i];
	for(int j=0;j<m;j++)
	cin>>arr2[j];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0|| j==0)
			lcs[i][j]=0;
			else if(arr1[i-1]==arr2[j-1])
			lcs[i][j]=lcs[i-1][j-1]+1;
			else
			lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
		//	cout<<lcs[i][j]<<" ";
		}
	//	cout<<endl;
	}
//	cout<<endl;
//	cout<<lcs[n][m]<<endl;
	vector<int>ans;
	int i=n,j=m;
	while(i>0 && j>0)
	{
		if(arr1[i-1]==arr2[j-1])
		{
			ans.push_back(arr1[i-1]);
			i--;
			j--;
		}
		else if(lcs[i-1][j]>lcs[i][j-1])
		i--;
		else
		j--;
	}
	for(int i=ans.size()-1;i>=0;i--)
	cout<<ans[i]<<" ";
	cout<<endl;
}
