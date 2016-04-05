
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void generateSubsets(int start,int Num,int* arr,vector<int>& vect)
{
	int sum;
	for(int mask=1;mask<(1<<Num);mask++)
	{
		sum=0;
		for(int item=1;item<Num;item++)
			if(mask & (1<<item))
				sum+=arr[item+start];
		vect.push_back(sum);
	}
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	int N;
	unsigned long long ans=0;
	vector<int> left;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
		cin>>arr[i];
	generateSubsets(0,N,arr,left);
	for(int i=0;i<left.size();i++)
	{
		if(i%N==0)
		   ans++;
	}
	cout<<ans<<endl;
}
	return 0;
}

