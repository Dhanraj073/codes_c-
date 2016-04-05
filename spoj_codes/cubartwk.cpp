#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,ans;
	while((scanf("%d%d",&a,&b))&&a&&b)
	{
		int arr1[a],arr2[b];
		ans=0;
		
		for(int i=0;i<a;++i)
		{
		   scanf("%d",&arr1[i]);
		   ans=ans+arr1[i];
	    }
		
		for(int i=0;i<b;++i)
		scanf("%d",&arr2[i]);
		
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				if(arr1[i]==arr2[j])
				{
					arr2[j]=0;
					break;
				}
			}
		}
		
		for(int z=0;z<b;++z){
			ans+=arr2[z];
		}
		cout << ans << endl;
	}
}
