#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		long long int n,m,a,k,q=0,r=2;
		cin>>n>>m>>k;
		while(m>k)
		{
		 a=k;
		for(int j=a+1;j<=sqrt(m)+2;j++)
		{	
			 if(m%j==0)
			{  m=m/j;
			r=j;
			   q++;
			   break;
			}
		}
		m=m/r;
	}
	    q=q*n;
	       if(q%2==0)
	     cout<<"Havanese"<<endl;
	     else
	      cout<<"Bernard"<<endl;
		}
	// your code goes here
	return 0;
}
