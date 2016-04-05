#include<bits/stdc++.h>
using namespace std;
long long arr[100001],arr2[100001];
void mergesort(long long a[],int low,int mid,int high)
{
 long long temp[100005];
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
	long long n,p,k,mini,maxi;
	scanf("%lld%lld%lld",&n,&p,&k);
	for(int i=0;i<n;i++)
	cin>>arr[i];
	while(p--)
	{
		int a,b,j=0,flag=1;
		scanf("%d%d",&a,&b);
		long long temp1=arr[a-1];
		long long temp2=arr[b-1];
		mini=min(temp1,temp2);
		maxi=max(temp1,temp2);
		cout<<mini<<" "<<maxi<<endl;
		for(int i=0;i<n;i++)
		{
			if(arr[i]>=mini && arr[i]<=maxi)
			arr2[j++]=arr[i];
		}
		partition(arr2,0,j-1);
		for(int i=1;i<(b-a+1);i++)
		if(arr2[i]-arr2[i-1]>k)
		{
			flag=0;
			break;
		}
		if(flag)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}
