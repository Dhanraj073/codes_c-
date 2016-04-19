#include <bits/stdc++.h>

#define LLI long long int
#define LLU long long unsigned int
#define LI  long int
#define LU  long unsigned
#define MAX(a,b) ((b)^(((a)^(b))&-((a)>(b))))
#define MIN(a,b) ((b)^(((a)^(b))&-((a)<(b))))
#define BUG printf("BUGGEeee");
#define PRINT(n) printf("%d\n",n);
#define MOD 1000000007
#define POWER2(v) (v && !(v & (v - 1)))
#define FOR(i,n) for(i=0;i<n;i++)
#define PA pair<LLI,LLI>
#define PB pair<PA,LLI>
#define PUS(x) push_back(x)


#define MAX_VAL 10005
using namespace std;
struct BOX
{
	int C;
	int Z;
};
bool compare(struct BOX lhs,struct BOX rhs)
{
	if(lhs.Z>rhs.Z)
		return true;
	else
		return false;
}
int main()
{
	
	int T;
	cin>>T;
	while(T--)
	{
		int N,K,M,temp;
		cin>>N>>M>>K;
		int keys[N];
		for(int i=0;i<N;i++)
		cin>>keys[i];
		struct BOX box[M];
		int temp_box[M];
		for(int i=0;i<M;i++)
		cin>>temp_box[i];
		for(int i=0;i<M;i++)
		{
			cin>>temp;
			box[i].C=temp_box[i];
			box[i].Z=temp;
		}
		sort(box,box+M,compare);
		int NON_CO[N][M];
		vector<int>non[N];
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<M;j++)
			{
				if(__gcd(keys[i],box[j].C)!=1)
				{
					NON_CO[i][j]=1;
					non[i].push_back(j);
				}
				else
				NON_CO[i][j]=0;
			}
		}
		long long max_term=1<<N,max_ans=0;
		for(int i=0;i<max_term;i++)
		{
			int cou=__builtin_popcount(i);
			if(cou==K)
			{
				int vals[M];
				memset(vals,0,sizeof(vals));
				long long temp_max_ans=0;
				for(int j=0;j<N;j++)
				{
					if(i& (1<<j))
					{
						for(int k=0;k<non[j].size();k++)
						{
							if(vals[non[j][k]]==0)
							{
								temp_max_ans+=box[non[j][k]].Z;
								vals[non[j][k]]=1;
							}
						}
					}
				}
				max_ans=max(max_ans,temp_max_ans);
			}
		}
		cout<<max_ans<<endl;
	}	
}
