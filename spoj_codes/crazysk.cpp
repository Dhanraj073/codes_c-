#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		long long int item,card,ans;
		scanf("%lld%lld",&item,&card);
		if(item %(card-1)==0)
		   ans=(item/(card-1)) - 1;
		else
		ans=(item)/(card-1);
		ans=ans+item;
		cout<<ans<<endl;
	}
}
