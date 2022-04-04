#include<iostream.h>
#include<conio.h>

const int n=3;
int s[n],top=-1;

void push(int x)
{
    if(top>=n-1)
	cout<<"The Stack is Full";
    else
	s[++top]=x;
}

int pop()
{
    if(top<=-1)
	cout<<"The Stack is Empty";
    else
	return(s[top--]);
}

void display()
{
    if(top<=-1)
	cout<<"The stack is Empty \n";
    else
    {
	cout<<"\n The content of the stack is :\n";
	for(int i=top;i>=0;i--)
	cout<<s[i]<<"\t\n";
    }
}

int main()
{
    int ch,item;
    clrscr();
    do
    {
	cout<<"\n STACK OPERATION";
	cout<<"\n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT \n";
	cout<<"Enter your choice :";
	cin>>ch;
	switch(ch)
	{
	    case 1:
		cout<<"\n Enter an item to insert :";
		cin>>item;
		push(item);
		display();
	    break;

	    case 2:
		if(top>-1)
		cout<<"The Deleted item is "<<pop()<<endl;
		display();
	    break;

	    case 3:
		display();
	    break;

	    default:
		cout<<"Enter correct choice";
	}

    } while(ch!=4);
    getch();
    return 0;
}