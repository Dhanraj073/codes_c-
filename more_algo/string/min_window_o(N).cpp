#include<bits/stdc++.h>
using namespace std;
int myfun(string str,string pat)
{
	int N=str.length();
	int M=pat.length();
	int need_find[256]={0};
	for(int i=0;i<M;i++)
	need_find[pat[i]]++;
	int has_found[256]={0};
	int min_window=INT_MAX;
	int cnt=0;
	for(int begin=0,lst=0;lst<N;lst++)
	{
		if(need_find[str[lst]]==0)
		continue;
		has_found[str[lst]]++;
		if(has_found[str[lst]]<=need_find[str[lst]])
		cnt++;
		
		if(cnt==M)
		{
			while(need_find[str[begin]]==0 || has_found[str[begin]] > need_find[str[begin]])
			{
				if(has_found[str[begin]] > need_find[str[begin]])
				has_found[str[begin]]--;
				begin++;
			}
			int wind_len=lst-begin+1;
		//	cout<<wind_len<<"Xxxx"<<endl;
			min_window=min(min_window,wind_len);
		}
	}
	if(cnt==M)
	return min_window;
	else
	return -1;
}
int main()
{
	string str,pat;
	cin>>str>>pat;
	cout<<"Minimum window in size in O(N) time is"<<endl;
	int ams=myfun(str,pat);
	cout<<ams<<endl;
}
