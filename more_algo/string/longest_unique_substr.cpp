#include<bits/stdc++.h>
using namespace std;
int longest_unique_subs(string str)
{
	int n=str.length();
	int cur_len=1,max_len=1,prev_ind;
	int visited[256]={-1};
	visited[str[0]]=0;
	for(int i=1;i<n;i++)
	{
		prev_ind=visited[str[i]];
		if(prev_ind == -1 || i- cur_len > prev_ind)
		cur_len++;
		else
		{
			max_len=max(max_len,cur_len);
			cur_len=i-prev_ind;
		}
		visited[str[i]]=i;
	}
	max_len=max(max_len,cur_len);
	return max_len;
}
int main()
{
	string str;
	cin>>str;
	int ans=longest_unique_subs(str);
	cout<<ans<<endl;
}

