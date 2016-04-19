//snake and ladder problem 

#include<bits/stdc++.h>
using namespace std;

struct queueEntry{
	int v;
	int dist;
};

int getMinimumThrows(int move[],int N)
{
	int visited[N];
	memset(visited,0,sizeof(visited));
	queue<queueEntry> myqueue;
	
	visited[0]=1;
	queueEntry q={0,0};
	myqueue.push(q);
	queueEntry temp;
	while(!myqueue.empty())
	{
		temp=myqueue.front();
		int dest=temp.v;
		if(dest==N-1)
		break;
		myqueue.pop();
		for(int j=dest+1;j<=dest+6 && j<N;j++)
		{
			if(!visited[j])
			{
				queueEntry var;
				var.dist=temp.dist+1;
				visited[j]=1;
				if(move[j]!=-1)
				var.v=move[j];
				else
				var.v=j;
				myqueue.push(var);
			}
		}
		
	}
	return temp.dist;
}

int main()
{
	int N=30;
	int moves[N];
	moves[2] = 21;
    moves[4] = 7;
    moves[10] = 25;
    moves[19] = 28;
    moves[26] = 0;
    moves[20] = 8;
    moves[16] = 3;
    moves[18] = 6;
    cout << "Min Dice throws required is " << getMinimumThrows(moves, N)<<endl;
    return 0;
}
