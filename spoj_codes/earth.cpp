#include <bits/stdc++.h>
using namespace std;
int  rotation[800002][5];
int digs[800004]={0};
     
void count_rotat(int num,long int i1)
    {
int temp=num,cont=0;
while(temp>0)
    {
    cont+=1;
    temp/=10;
    }
    
digs[num]=cont;
temp=num;
int arr[10];

for(int i=cont;i>=1;i--)
    {
    arr[i]=temp%10;
    temp/=10;
   }
    arr[cont+1]=arr[1];
    
	int  sum=0,k=0;
    for(int i=cont+1;i>=2;i--)
    {
    sum+=arr[i]*pow(10,k++);
    }
    rotation[i1][1]=sum;
    arr[cont+2]=arr[2];
    
    sum=0,k=0;
    for(int i=cont+2;i>=3;i--)
    {
    sum+=arr[i]*pow(10,k++);
    }
    rotation[i1][2]=sum;
    
    arr[cont+3]=arr[3];
    sum=0,k=0;
    
    for(int i=cont+3;i>=4;i--)
    {
    sum+=arr[i]*pow(10,k++);
    }
    rotation[i1][3]=sum;
    arr[cont+4]=arr[4];
    
    sum=0,k=0;
    for(int i=cont+4;i>=5;i--)
    {
    sum+=arr[i]*pow(10,k++);
    }
    rotation[i1][4]=sum;
    }
    
int main ()
    {
    long int n,m,l,r;
    scanf("%ld",&n);
    int arr[n+1],type,value,copyarr[n+1];
    int count_rot[n+5];
    for(int i=0;i<n;i++)
    count_rot[i]=0;
    for(long int  i=0;i<n;i++)
    {
    cin>>arr[i];
    rotation[i][0]=arr[i];
    count_rotat(arr[i],i);
    }
   // cout<<rotation[0][0] <<" "<<rotation[0][1]<<" "<<rotation[0][2]<<" "<<rotation[0][3]<<" "<<rotation[0][4];
  
  for(long int i=0;i<n;i++)
   copyarr[i]=arr[i];
  
   scanf("%ld",&m);
    for(long int  i=0;i<m;i++)
    {
    scanf("%d",&type);
    
	if(type==0)
    {
    scanf("%ld%ld%d",&l,&r,&value);
    for(long int j=l;j<=r;j++)
    count_rot[j]+=value;
    for(long int j=l;j<=r;j++)
    {
    arr[j]=rotation[j][count_rot[j] % digs[copyarr[j]]];
    }
    }
    
    if(type==1)
    {
    scanf("%ld%ld",&l,&r);
    int maxim=arr[l];
    for(long int j=l+1;j<=r;j++)
    if(arr[j]>maxim)
    maxim=arr[j];
    printf("%d\n",maxim);
    } 
    } 
    return 0;
     
    } 
