#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,cal=0;
    cin>>n>>m;
	while( n && m)
	{
		char str[25];
		int hash[300001]={0},arr[200001]={0};
		for(int i=0;i<n;i++)
		{
			cal=0;
			scanf("%s",&str);
			for(int j=0;j<m;j++)
			{
				if(str[j]=='A')
				cal=cal*10+1;
				if(str[j]=='C')
				cal=cal*10+2;
				if(str[j]=='G')
				cal=cal*10+3;
				if(str[j]=='T')
				cal=cal*10+4;
			}
			arr[i]=cal;
		}
		sort(arr,arr+n);
		int temp=arr[0],count=1;;
		for(int i=1;i<n;i++)
		{
			if(arr[i]==temp)
            count++;
			else
			{
			hash[count]++;
			count=1;
			temp=arr[i];
            }
           }
           hash[count]++;
		for(int i=1;i<=n;i++)
		cout<<hash[i]<<endl;
	cin>>n>>m;
	}
}
