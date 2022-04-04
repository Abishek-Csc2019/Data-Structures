#include<iostream.h>
#include<conio.h>
const int n=3;
int q[n],front=-1,rear=-1;

void enqueue()
{
    int x;
    if((rear+1)%n==front)
    {
	cout<<"Queue is full \n";
    }
    else
    {
	rear=(rear+1)%n;
	if(front==-1)
	front=0;
	cout<<"Enter the value to be inserted :";
	cin>>x;
	q[rear]=x;
    }
}

void dequeue()
{
    if(front==-1)
    {
	cout<<"Queue is Empty \n";
    }
    else
    {
	cout<<"The deleted item from the queue is :"<<q[front]<<endl;
	if(front==rear)
	{
	    front=-1;
	    rear=-1;
	}
	else
	front=(front+1)%n;
    }
}

void display()
{
    if(front==-1)
    cout<<"The Queue is Empty \n";
    if(front<=rear)
    {
	for(int i=front;i<=rear;i++)
	cout<<q[i]<<"\t";
    }
    else
    {
	for(int i=front;i<=n-1;i++)
	cout<<q[i]<<"\t";
	for(int i=0;i<=rear;i++)
	cout<<q[i]<<"\t\n";
    }
}

int main()
{
    int ch;
    clrscr();
    do{
	cout<<"\n QUEUE OPERATIONS";
	cout<<"\n 1.INSERT \n 2.DELETE\n 3.DISPLAY \n 4.EXIT \n";
	cout<<"\n Enter your choice :";
	cin>>ch;
	switch(ch)
	{
	    case 1: enqueue();
	    display();
	    break;
	    case 2: dequeue();
	    display();
	    break;
	    case 3: display();
	    break;
	    case 4: cout<<"Exit"<<endl;
	}
    } while(ch!=4);
    getch();
    return 0;
}
