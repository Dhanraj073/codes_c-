#include<iostream>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long int a,b,no_O;
		cin>>a>>b;
		if(a&1)
		no_O=(a/2)+1;
		else
		no_O=(a/2);
		if(no_O %2!=0 && b==1)
		cout<<"Pagfloyd wins."<<endl;
		else if(no_O %2 !=0 && b==0)
		cout<<"Airborne wins."<<endl;
		else if(no_O % 2==0 && b==1)
		cout<<"Airborne wins."<<endl;
		else if(no_O %2==0 && b==0)
		cout<<"Pagfloyd wins."<<endl;
		
		
	}
}
