#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	scanf("%d%d",&n,&q);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	while(q--)
	{
		int x,y,count=0;
		scanf("%d%d",&x,&y);
		int temp;
		temp=arr[x-1];
		arr[x-1]=arr[y-1];
		arr[y-1]=temp;
		for(int i=0;i<n;i++)
		{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			count++;	
		}
	     }
		cout<<(count %2)<<endl;
	}
	return 0;
}
