#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,i,j,k;
char match[10001];
int count;
string str;
char *list[10001];
int len,flag;
scanf("%d",&t);
getline(cin,str);
while(t--)
	{
	j=0;
	count=0;
	//scanf(" %[^\n]s",str);
	getline(cin,str);
	while(j<str.length())
		{
		len=0;
		flag=0;
		while(str[j]!=' ' && j<str.length())
			{
			match[len]=str[j];
			j++;
			len++;
			}
		match[len]='\0';
		if(len>0)
			{
			for(k=0;k<count;k++)
				{
				if(strcmp(match,list[k])==0)
					{
					flag=1;
					break;
					}
				}

			if(flag==0)
				{
				list[count]=(char *)malloc(sizeof(char)*(len+1));
				strcpy(list[count],match);
				count++;
				}		
			}
		j++;
		}
	printf("%d\n",count);
	}

return 0;
}

