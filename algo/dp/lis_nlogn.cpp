#include <bits/stdc++.h>
using namespace std;
int indi(int A[],int l,int r,int key)
{
    while (r-l>1)
    {
        int mid=(r+l)/2;
        if(A[mid]>=key)
       	r=mid;
        else
        l=mid;
    }
    return r;
}
int myfun(int A[], int size)
{
    int temp[size];
    int len=1;
    memset(tailTable,0,sizeof(tailTable));
    temp[0=A[0];
    for (int i=1;i<size;i++)
    {
        if (A[i]<temp[0])
        temp[0]=A[i];
        else if(A[i]>temp[len-1])
        temp[len++]= A[i];
        else
        temp[indi(temp,-1, len-1, A[i])]=A[i];
    }
    return len;
}
 
int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    cin>>A[i];
    cout<<LongestIncreasingSubsequenceLength(A, n)<<endl;;
 
    return 0;
}
