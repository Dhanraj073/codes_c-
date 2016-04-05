#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int min(int a,int b)
{
int x;
x=(a>b)?b:a;
return x;
}

int main()
{
	static int arr[2010][2010];
    int test,m,temp1,temp2;
    cin>>test;
    while(test--)
    {	
    	char str1[2001],str2[2001];
        scanf("%s",&str1);
        scanf("%s",&str2);
        int len1=strlen(str1);
        int len2=strlen(str2);
        for(int i=0;i<=len1;i++)
         arr[i][0]=i;
        for(int i=1;i<=len2;i++)
        arr[0][i]=i;
        for(int i=1;i<=len1;i++)
        {
            for(int j=1;j<=len2;j++)
            {
                m=(str1[i-1]==str2[j-1]) ? 0:1;
                temp1=min(arr[i-1][j]+1,arr[i][j-1]+1);
                temp2=arr[i-1][j-1]+m;
              arr[i][j]=min(temp1,temp2);
            }
        }
        printf("%d\n",arr[len1][len2]);
    }
    return 0;
}
