# include<iostream>
# include<cstdio>
using namespace std;
typedef struct node
{
int data;;
struct node*next;
}node;
node *adjlist;
void display();

int main()
{
	
int n,ch;
int val;
struct node *t1,*temp,*ptr;
printf("enter no. of nodes in the graph\n");
scanf("%d",&n);
adjlist=new node[n];
for(int i=0;i<n;i++)
{
	adjlist[i]=NULL;
}
for(int i=0;i<n;i++)
{
	cout<<"Tell the adjacency node of vertex "<<i+1<<endl;
	do
	{
		cin>>val;
		if(val!=-1)
		{
			ptr=new (node);
			ptr->data=val-1;
			ptr->next=NULL;
			if(adjlist[i]==NULL)
			adjlist[i] =ptr;
			else
			{
				ptr->next=adjlist[i];
				adjlist[i]=ptr;
			}
		}
	} while(val!= -1);
}


return 0;
}

void display()
{
	for(int i=0;i<n;i++)
	{
		cout<<"Adjacency list of"<<i+1<<"node"<<endl;
		while(adjlist[i]->next!=NULL)
		cout<<adjlist[i]->(val-1);
		cout<<endl;
}
} 
