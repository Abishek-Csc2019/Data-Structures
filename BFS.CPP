#include <iostream.h>
#include <conio.h>
class graph
{
    int n, q[10], front, rear, a[10][10], visited[10];

public:
    graph();
    void getdata();
    void BFS();
};

graph::graph()
{
    for (int i = 1; i <= 10; i++)
    {
        q[i] = 0;
    }
    rear = 0;
    front = -1;
}

void graph::getdata()
{
    cout << "Enter the number of nodes: " << endl;
    cin >> n;
    cout << "Enter adjacency matrix : " << endl;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
}

void graph::BFS()
{
    int s = 1;
    for (int i = 1; i <= n; i++)
        visited[i] = 0;
    q[rear++] = s;
    visited[s] = 1;
    while (front < rear)
    {
        front++;
        int t = q[front];
        for (i = 1; i <= n; i++)
        {
            if ((a[t][i] == 1) && (visited[i] == 0))
            {
                visited[i] = 1;
                cout << t << "---" << i << endl;
                q[rear++] = i;
            }
        }
    }
}
void main()
{
    clrscr();
    graph g;
    g.getdata();
    cout << "Breadth First Search" << endl;
    g.BFS();
    getch();
}
