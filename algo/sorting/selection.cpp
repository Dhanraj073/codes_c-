#include<bits/stdc++.h>
using namespace std;
int arr[123456];
void bubble_sort(int arr[],int num)
{
	int temp,mini;
	for(int i=0;i<num-1;i++)
	{
		mini=i;
		for(int j=i+1;j<num;j++)
		{
			if(arr[mini]>arr[j])
			mini=j;
		}
		temp=arr[i];
		arr[i]=arr[mini];
		arr[mini]=temp;
	}
	for(int i=0;i<num;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"sorted array is"<<endl;
	bubble_sort(arr,n);
}
