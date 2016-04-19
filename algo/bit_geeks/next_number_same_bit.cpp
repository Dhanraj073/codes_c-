#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long num;
	while(cin>>num)
	{
		long long t1,t2,t3;
		if(num)
		{
			t1= num & -num;
			t2=t1+num;
			t3=num^t2;
			t3=t3/t1;
			t3>>=2;
			num=t2|t3;
		}
		cout<<t1<<" "<<t2<<" "<<t3<<" "<<num<<endl;
	//	cout<<num<<endl;
	}
}
