#include<iostream>
#include<math.h>
#include<cmath>
#include<stdlib.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	long int n,m,k,result,ans,ans1,ans2;
	while(scanf("%ld%ld%ld",&n,&m,&k))
	{
		if(n==0 && m==0 && k==0)
		return 0;
		else
		{
		result=abs(n-k);
		if(result % m !=0)
		printf("No accounting tablet\n");
		else
		{
			result=result/m;
			if(result==1)
			cout<<"1"<<endl;
			else
		 {
		 	ans=result/3 ;
		 	ans1=result%3;
		 	ans2=ans1%2;
		 	ans1=ans1/2;
		 	ans=ans+ans1+ans2;
		 	cout<<ans<<endl;
		}
		
	}
		}
}
return 0;
}
