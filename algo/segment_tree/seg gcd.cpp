#include <bits/stdc++.h>
using namespace std;
long long segment_tree[8765432]={0};
long long function[8765432]={0};

//building a function tree
void updateValueUtilF( long long ss, long long se, long long i, long long diff, long long index)
{    
    if (i < ss || i > se)
    return;
    function[index] = function[index] + diff;
    if (se != ss)
    {
        long long mid = ss + (se -ss)/2; ;
        updateValueUtilF( ss, mid, i, diff, 2*index);
        updateValueUtilF( mid+1, se, i, diff, 2*index + 1);
    }
}
void updateValueF(long long F[],long long n, long long i, long long new_val)
{
    long long diff = new_val - F[i];
    F[i] = new_val;
 	updateValueUtilF(0, n-1, i, diff, 1);
}

void build_function_tree(long long F[], long long node, long long b, long long e) 
{
	if (b == e) 
	function[node] = F[b]; 
	else 
	{ 
		build_function_tree( F,2 * node , b , (b + e) / 2);
		build_function_tree( F,2 * node+1, (b + e) / 2 + 1, e );
		function[node] = function[2*node]+function[(2*node)+1];
	}
}
long long queryFunction(long long F[], long long node, long long b, long long e, long long i, long long j)
{
	if (i > e || j < b) return -1; 
	if (b >= i && e <= j) return function[node]; 
	long long p1 = queryFunction( F,2 * node , b , (b + e) / 2, i, j);
	long long p2 = queryFunction( F,2 * node + 1, (b + e) / 2 + 1, e , i, j);
	if (p1 == -1) return p2; 
	if (p2 == -1) return p1;
	 return p1 + p2;
	
}
// segment_tree construction,updation,and result
void updateValueUtil( long long ss, long long se, long long i, long long diff, long long index)
{
    if (i < ss || i > se)
    return;
    segment_tree[index] = segment_tree[index] + diff;
    if (se != ss)
    {
        long long mid = ss + (se -ss)/2; ;
        updateValueUtil( ss, mid, i, diff, 2*index);
        updateValueUtil( mid+1, se, i, diff, 2*index+1);
    }
}
void updateValue(long long A[],long long n, long long i, long long new_val)
{
    long long diff = new_val - A[i];
    A[i] = new_val;
    updateValueUtil(0, n-1, i, diff, 1);
}

void build_segment_tree(long long A[], long long node, long long b, long long e) 
{
	if (b == e) 
	segment_tree[node] = A[b]; 
	else 
	{ 
	build_segment_tree( A,2 * node , b , (b + e) / 2);
	build_segment_tree( A,2 * node + 1, (b + e) / 2 + 1, e );
	segment_tree[node] = segment_tree[2 * node] + segment_tree[2 * node + 1]; 
	}
 }
long long query(long long A[], long long node, long long b, long long e, long long i, long long j)
{
	if (i > e || j < b) return -1; 
	if (b >= i && e <= j) return segment_tree[node];
	long long p1 = query( A,2 * node , b , (b + e) / 2, i, j);
	long long p2 = query( A,2 * node + 1, (b + e) / 2 + 1, e , i, j);
	if (p1 == -1) return p2; 
	if (p2 == -1) return p1; 
	 return p1 + p2;
	
}

int main() 
{
	long long n;
	std::ios::sync_with_stdio(false);
	cin>>n;
	long long A[n],l[n],r[n],f[n];

	for(long long i=0;i<n;i++)
	{
		cin>>A[i];
	}
	build_segment_tree(A,1, 0, n-1);
	
	for(long long i=0;i<n;i++)
	{
		cin>>l[i]>>r[i];
		f[i]=query( A,1, 0, n-1, l[i]-1, r[i]-1);
	}
	build_function_tree(f,1, 0, n-1);
	long long query;
	cin>>query;
	while(query--)
	{
		long long x,y,z;
		cin>>x>>y>>z;
		if(x==2)
		{
			long long result=queryFunction( f,1, 0, n-1, y-1, z-1);
			cout<<result<<endl;
		}
		else
		{
			long long k=A[y-1];
			updateValue(A,n,y-1,z);
			for(long long i=0;i<n;i++)
			{
				if(y>=l[i] && y<= r[i])
				updateValueF(f,n,i,z-k+f[i]);
			}
		}
	}
return 0;
}
