#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int m;
		scanf("%d",&m);
		long long int arr[m];
		for(int i=0;i<m;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+m);
		for(int i=m-1;i>=0;i--)
		{
			 if(arr[i]==3 && arr[i-1]==2)
			{
				arr[i]=2;
				arr[i-1]=3;
			}
		}
		for(int i=m-1;i>=0;i--)
		{
			cout<<arr[i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}
