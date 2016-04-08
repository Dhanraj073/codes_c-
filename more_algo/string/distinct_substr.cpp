#include<bits/stdc++.h>
using namespace std;
char str[50005];
int s[50005];
int cmp(const void *a,const void *b) 
{
	return (strcmp((str+ *((int*)a)),(str+ *((int*)b))));
}

void suffix_array(long long n)
{
	for(int i=0;i<n;i++) 
	s[i]=i;
	qsort(s,n,sizeof(int),cmp);
}
long long lcp(long long len) 
{
	long long cnt= 0,temp=0;
	char *z=str,*y=str;
	for(int i=1,k=0;i<len;i++,k=0) 
	{
		temp=0;
		z =str + s[i];
		y =str + s[i-1];
		while(*z==*y) 
		{
			temp++;
			z++;
			y++;
		}
		cnt+=temp;
	}
	return cnt;
}

int main() 
{
	int n;
	cin>>n;
	while(n--) 
	{
		cin>>str;
		long long len = strlen(str);
		suffix_array(len);
		long long ans= lcp(len);
		printf("%lld\n", (len*(len+1)/2)-ans);
	}
	return 0;
}
