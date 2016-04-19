#include<bits/stdc++.h>
using namespace std;

int joseph(int n,int k)
{
	if(n==1)
	return 1;
	return ((joseph(n-1,k)+k-1)%n + 1);
}
//// o(n)
int josephus(int n,int k)
{
	int temp=0;
	for(int i=1;i<=n;i++)
	{
		temp=temp+k;
		temp%=i;
	}
	return temp+1;
}
///// klogn
int josephus_small_k(int n,int k)
{
	if(n==1)
	return 0;
	if(k==1)
	return n-1;
	if(k>n)
	return (josephus_small_k(n-1,k)+k)%n;
	int cnt=n/k;
	int res=josephus_small_k(n-cnt,k);
	res-= n%k;
	if(res<0)
	res+=n;
	else
	res=res+ res/(k-1);
	return res;
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<joseph(n,k)<<endl;
	cout<<josephus(n,k)<<endl;
	cout<<josephus_small_k(n,k) + 1<<endl;
}
