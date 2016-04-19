#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	std::ios::sync_with_stdio(false);
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		long long arr[1100],temp,num;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			num=temp;
			int dig[10]={0};
			while(num>=1)
			{
				dig[num % 10]++;
				num/=10;
			}
		//	cout<<endl;
			for(int i=0;i<10;i++)
			{
			//	cout<<dig[i]<<" ";
				if(dig[i])
				num+=pow(2,i);
			}
			arr[num]++;
		}
		//cout<<endl;
		num=0;
		for(int i=1;i<=1024;i++)
		{
			for(int j=1;j<=1024;j++)
			if(i!=j && i&j)
			num+=arr[i]*arr[j];
		}
		for(int i=1;i<=1024;i++)
		num+=arr[i]*arr[i-1];
		cout<<num/2<<endl;
	}
}
