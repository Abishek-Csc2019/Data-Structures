#include<iostream.h>
#include<conio.h>
class graph
{
 int n,a[10][10],visited[10];
 public:
 void getdata();
 void DFS();
 void dfs(int);
};

void graph::getdata()
{
 cout<<"Enter the number of nodes: ";
 cin>>n;
 cout<<"Enter Adjacency Matrix : \n";
  for(int i=1;i<=n;i++)
  for(int j=1;j<=n;j++)
  cin>>a[i][j];
}

void graph::DFS()
{
 int s=1;
 for(int i=1;i<=n;i++)
 visited[i]=0;
 visited[s]=1;
 cout<<s;
 dfs(s);
 cout<<"\n";
}

void graph::dfs(int v)
{
 for(int i=2;i<=n;i++)
 {
  if((a[v][i]==1)&&(visited[i]==0))
  {
   visited[i]=1;
   cout<<"---"<<i;
   dfs(i);
  }
 }
}

void main()
{
 clrscr();
 graph g;
 g.getdata();
 cout<<"Depth First Search \n";
 g.DFS();
 getch();
}