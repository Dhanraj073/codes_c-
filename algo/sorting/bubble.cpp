#include<bits/stdc++.h>
using namespace std;
int arr[123456];
void bubble_sort(int arr[],int num)
{
	/*
	int temp;
    for(int k = 0; k< num-1; k++)
	{
    	for(int i = 0; i < num-k-1; i++)
		{
            if(arr[ i ] > arr[ i+1] )
			{
                temp =arr[ i ];
                arr[ i ] = arr[ i+1 ];
            	arr[ i + 1] = temp ;
            }
        }
    }	*/
	int temp;
	for(int i=0;i<num-1;i++)
	{
		for(int j=0;j<num-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
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
