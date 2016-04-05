    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    int res,min,test,n,m,cust[405],arr[404],count[404],table,index,temp[404],next[404],flag,result;
    scanf("%d",&test);
    while(t--)
    {	
	for(int i=1;i<=404;i++)
    {
	arr[i]=0;
    count[i]=0;
    temp[i]=-1;
    next[i]=-1;
    }
    table=0; res=0; min=1000;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++)
    {	
	scanf("%d",&cust[i]);
    count[cust[i]]++;
    }
    for(int i=m;i>0;i--)
    {
    if(temp[cust[i]]==-1)
    {
    temp[cust[i]]=i;
    next[i]=-1;
    }
    else
    {
    next[i]=temp[cust[i]];
    temp[cust[i]]=i;
    }
    }	
    for(int i=1;i<=m;i++)
    {	
    if(arr[cust[i]]==1)
    count[cust[i]]--;
    else
    {	
	if(table<n)
    {
    arr[cust[i]]=1;
    count[cust[i]]--;
    table++;
    res++;
    }
    else
    {	
    flag=0;
    for(int j=i-1;j>0;j--)
    {
    if(arr[cust[j]]==1&&next[j]==-1)
    {
    arr[cust[j]]=0;
    arr[cust[i]]=1;
    flag=1;
    res++;
    break;
    }
    }
    if(flag==0)
    {	
    result=-1;
    for(int j=i-1;j>0;j--)
    {	
    if(next[j]>result&&arr[cust[j]]==1)
    {
    result=next[j];
    index=j;
    }
    }
    arr[cust[index]]=0;
    arr[cust[i]]=1;
    res++;
    }
    }
    }	
    }
    printf("%d\n",res);
    }
    return 0;
    } 
