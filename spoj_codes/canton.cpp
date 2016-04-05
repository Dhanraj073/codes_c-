#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test,temp,res,temp2;
	cin>>test;
	while(test--)
	{
		res=0;
		temp=0;
		temp2=0;
		int num;
		scanf("%d",&num);
		for(int i=1;1420;i++)
		{
			res=res+i;
			if(res>=num)
			{
				temp2=i;
				break;
			}
		}
		temp=num+temp2-res;
		if(temp2%2==0)
		cout<<"TERM "<<num<<" IS "<<temp2+1-temp<<"/"<<temp<<endl;
		else
		cout<<"TERM "<<num<<" IS "<<temp<<"/"<<temp2+1-temp<<endl;
	}
}
