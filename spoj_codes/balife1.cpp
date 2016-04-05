#include<bits/stdc++.h>
using namespace std;
int arr[9009];

int check_value(int n,int e)
{
for(int i=0;i<n;i++)
	{
	if(arr[i]!=e)
	return 0;
	}
return 1;
}

int main()
{
int n,sum,ele,temp,temp1;
double arr1[9009],arr2[9009];
scanf("%d",&n);
while(n!=-1)
	{
	sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];		
	}
	if(sum %n!=0)
	printf("-1\n");
	else
	{
		ele = sum/n;
		temp=0;
		temp2=0;		
		while(temp2==0)
		{
			arr2[0]=0;
            arr1[n-1]=0;
        for(int i=1;i<n;i++)
        arr2[i]=arr2[i-1]+arr[i-1];
        for(int i=n-2;i>=0;i--)
        arr1[i]=arr1[i+1]+arr[i+1];
        for(int i=1;i<n;i++)
         arr2[i]=right[i]/i;

                                for(i=0;i<n-1;i++)
                                        {
                                        left[i]=left[i]/(n-1-i);
                                        }
                                ch = check(n,each);
                                if(ch==1)
					break;

				for(j=0;j<n;j++){
				if(j==0)
					{
					if(left[j]<each)
						{
						w[j]-=1;
						w[j+1]+=1;
						}
					}

				else if(j==n-1)
					{
					if(right[j]<each)
                                                {
                                                w[j]-=1;
                                                w[j+1]+=1;
                                                }
                                       

					}

				else
					{
					if(left[j]<each)
						{
						w[j]-=1;
						w[j+1]+=1;
						}

					if(right[j]<each)
						{
						w[j]-=1;
						w[j-1]+=1;
						}

					}

				}

			res++;
			}
		printf("%d\n",res);

		}
		scanf("%d",&n);
	}
return 0;
}
