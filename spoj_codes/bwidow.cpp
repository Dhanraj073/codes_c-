#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,maxy=0,maxx=0,ind,flag=1;
		cin>>n;
		int arr[n][2];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i][0]>>arr[i][1];
			if(maxy<arr[i][1])
			{
				maxy=arr[i][1];
				maxx=arr[i][0];
				ind=i;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(maxx <=arr[i][1] && arr[i][1]!=maxy)
		     {
		  flag=0;
		  	break;
			  }
		}
		if(flag)
		cout<<ind+1<<endl;
		else
		cout<<"-1"<<endl;
	}
	return 0;
	
}
