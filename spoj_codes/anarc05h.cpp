#include <bits/stdc++.h>
using namespace std;

char str[26];
int dp[26][260];//returns the number of possibilities (dp states->(position,previousSum))
int len;

int solve(int pos,int prevSum)
{
if(pos==len)
return 1;
if(dp[pos][prevSum]!=-1)
return dp[pos][prevSum];
dp[pos][prevSum]=0;
int c=0;
int sum=0;
//this is the very important part of the solution.Here you are keeping on adding digits.if the sum(till ith digit)>=prevSum
//you call the subproblem solve(i+1,sum) .this process will be recursively going till the pos==length of input string
for(int i=0;i<len;i++)
{ 
sum+=str[i]-'0';
if(sum>=prevSum)
c+=solve(i+1,sum);
}
dp[pos][prevSum]=c;
return dp[pos][prevSum];
}
int main()
{	
int t=1;
while(1)
{
scanf("%s",str);
len=strlen(str);
if(!(str[0]>='0'&&str[0]<='9'))
break;
for(int i=0;i<25;i++)
{
memset(dp[i],-1,sizeof dp[i]);
}
printf("%d. %d\n",t++,solve(0,0));
}
}
