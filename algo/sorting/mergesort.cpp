#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
	int arr2[high-low+1];
	int temp=low,ind=0,temp2=mid+1;
	for(int i=low;i<=high;i++)
	{
		if(temp>mid)
		arr2[ind++]=arr[temp2++];
		else if(temp2>high)
		arr2[ind++]=arr[temp++];
		else if(arr[temp]<arr[temp2])
		arr2[ind++]=arr[temp++];
		else
		arr2[ind++]=arr[temp2++];
	}
	for(int i=0;i<ind;i++)
	arr[low++]=arr2[i];
}
void merge_sort(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		merge_sort(arr,low,mid);
		merge_sort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int main()
{
	int n;
	cin>>n;
	int temp[n];
	for(int i=0;i<n;i++)
	{
		cin>>temp[i];
	}
	merge_sort(temp,0,n-1);
	for(int i=0;i<n;i++)
	cout<<temp[i]<<" ";
}
