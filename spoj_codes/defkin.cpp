#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int w,h,n;
		scanf("%d%d%d",&w,&h,&n);
		int arr[w][h],rec[n][2];
		for(int i=0;i<w;i++)
		{
			for(int j=0;j<h;j++)
			{
				arr[i][j]=1;
			}
		}
		for(int i=0;i<n;i++)
		{
			cin>>rec[i][1]>>rec[i][2];
			int a=rec[i][1]-1;
			int b=rec[i][2]-1;
			for(int w=0;w<h;w++)
			arr[a][w]=-1;
			for(int q=0;q<w;q++)
			arr[q][b]=-1;
		}
			for(int i=0;i<w;i++)
		{
			for(int j=0;j<h;j++)
			{
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
