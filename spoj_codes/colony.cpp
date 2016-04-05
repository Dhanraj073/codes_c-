#include<iostream>
#include<stdio.h>

using namespace std;
typedef unsigned long long int bignum;

bool color(int year, bignum pos){
	if(year==0 && pos==0){
		return true;
	}
	if(pos < 1ULL<<(year-1))
	{
		return !color(year-1, pos);
	}
	else 
	{
		cout<<pos <<" "<<1ULL<<" "<<1ULL<<year-1<<endl;
	return color(year-1, pos-(1ULL<<(year-1)));
}	
}
int main()
{
	bignum year, pos;
	scanf("%llu\n%llu", &year, &pos);
	if(color(year, pos))
	printf("red\n");
	else printf("blue\n");
}
