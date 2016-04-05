#include<bits/stdc++.h>
using namespace std;
long long arr[20005];
void mergesort(long long a[],int low,int mid,int high)
{
 long temp[20005];
 int i=low,k=low,j=mid+1;
 while(i<=mid && j<=high)
 {
  if(a[i] <=a[j])
   temp[k++]=a[i++];
  else
   temp[k++]=a[j++];
 }
 while(i<=mid)
  temp[k++]=a[i++];
 while(j<=high)
  temp[k++]=a[j++];
 for(i=low;i<=high;i++)
  a[i]=temp[i];
}
void partition(long long a[],int low,int high)
{
 int mid;
 if(low<high)
 {
  mid=(low+high)/2;
  partition(a,low,mid);
  partition(a,mid+1,high);
  mergesort(a,low,mid,high);
 }
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n,k;
		long long mini= 1000000002 ;
		scanf("%d%d",&n,&k);
		for(int i=0;i<n;i++)
		cin>>arr[i];
		if(k>n)
		return 0;
		partition(arr,0,n-1);
		if(k==1)
		printf("0\n");
		else if(k==n)
		printf("%lld\n",arr[n-1]-arr[0]);
		else
		{
			for(int i=0;i<=n-k;i++)
			mini=min(mini,(arr[k+i-1]-arr[i]));
			printf("%lld\n",mini);
		}
	}
}
