#include<bits/stdc++.h>
using namespace std;
char array[100001];
int main()
{
	
	long long test;
	long long int n,ans,count,length;
	cin>>test;
	while(test--)
	{
		cin>>n;
		cin>>array;
		count=0;
		length=strlen(array);
		for(int i=0;i<length;i++)
		{
			if(array[i]=='1')
			count++;
		}

	    ans=(count*(count+1))/2;
		cout<<ans<<endl;
	}
	return 0;
}
