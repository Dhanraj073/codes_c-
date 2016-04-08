#include<bits/stdc++.h>
using namespace std;
int myfun(string str,string pat)
{
	int N=str.length();
	int M=pat.length();
	int min_window=INT_MAX;
	queue<int>q[256];
	map<int,char>mymap;
	map<int,char>:: iterator it;
	int arr[256]={0};
	for(int i=0;i<M;i++)
	arr[pat[i]]++;
	for(int i=0;i<N;i++)
	{
		if(arr[str[i]]==0)
		continue;
		if(q[str[i]].size()<arr[str[i]])
		{
			q[str[i]].push(i);
			mymap[i]=str[i];
		}
		else
		{
			int erase_ind=q[str[i]].front();
			it=mymap.find(erase_ind);
			mymap.erase(it);
			mymap[i]=str[i];
			q[str[i]].pop();
			q[str[i]].push(i);
		}
		if(mymap.size()==M)
		{
			int strt=mymap.begin()->first;
			int last=mymap.rbegin()->first;
			int sz=last-strt+1;
			min_window=min(min_window,sz);
		}
		
	}
	return min_window;
}
int main()
{
	string str;
	cin>>str;
	string str2;
	cin>>str2;
	cout<<"Minimum length of window required is "<<endl;
	int ans=myfun(str,str2);
	cout<<ans<<endl;
}
