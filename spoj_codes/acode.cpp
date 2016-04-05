#include<bits/stdc++.h>
using namespace std;
int main()
{
	char Input[5432];
	long long DP[5432];
 scanf ("%s", Input);
 while (strcmp(Input, "0"))
 {
  int Len = strlen (Input);
  int Index = 1;
  memset(DP,0,sizeof(DP));
  DP[0] = 1;
  while (Index < Len)
  {
   int temp = 0;
   temp = (Input[Index-1]-'0') * 10;         
   temp += (Input[Index] -'0');
   if (Input[Index]-'0') 
   DP[Index] = DP[Index-1];
   if (temp <= 26 && temp > 9)
   DP[Index] += DP[(Index-2)< 0 ? 0 : Index-2];
   Index++;
  }
  for(int i=0;i<=15;i++)
  cout<<DP[i]<<" ";
  cout<<endl;
  printf ("%lld\n", DP[Len-1]);
  scanf ("%s", Input);
 }
}

