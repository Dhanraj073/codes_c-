#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,k,sum,ans=0;
	cin>>n>>k;
	int a[n],b[n],c[n+1];
	a[n]=0;b[n]=0; c[n]=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		c[i]=a[i]*b[i];
	}
	for(int i=k;i<n;i++)
	{
		sum=sum+c[i];
	}
	cout<<ans<<endl;
	return 0;
}
