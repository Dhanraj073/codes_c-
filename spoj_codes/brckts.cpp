#include<bits/stdc++.h>
using namespace std;

int main()
{
	for(int j=0;j<10;j++)
	{
		int count=0,flag=1;
		int n;
		scanf("%d",&n);
		char arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n;i++)
	{
	if(arr[i]=='(')
	count=count +1;
	else
	count=count-1;
	if(count<0)
	{
		flag=0;
		break;
	}
	}
	count=0;
	for(int i=0;i<n;i++)
	{
	if(arr[i]=='(')
	count=count +1;
	else
	count=count-1;
    }
	int m;
	scanf("%d",&m);
	cout<<"Test "<<j+1<<":"<<endl;
	while(m--)
	{
		int k;
		scanf("%d",&k);
		if(k==0)
		{
			if(count==0 && flag)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
     	else
		{
			int temp=count;
			if(arr[k-1]=='(')
			{
			arr[k-1]=')';
			temp=temp-2;
		    }
			else
			{
			 arr[k-1]='(';
			 temp=temp+2;
		     }
		     count=0;
			for(int i=0;i<n;i++)
			{
				if(arr[i]=='(')
				count=count+1;
				else
				count=count-1;
				if(count<0)
				{
					flag=0;
					break;
				}
			}
			count =temp;
			temp=0;
		}
	} 
}
return 0;
}
