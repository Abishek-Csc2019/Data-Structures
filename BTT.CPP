#include<iostream.h>
#include<conio.h>
struct node
{
 int data;
 struct node *leftlink;
 struct node *rightlink;
};

class btree
{
 public:
 void inorder(node *r);
 void preorder(node *r);
 void postorder(node *r);
 node *insert(node *t,int x);
};

void btree::inorder(node *r)
{
 if(r!=NULL)
 {
  inorder(r->leftlink);
  cout<<"\t"<<r->data<<"\t";
  inorder(r->rightlink);
 }
}

void btree::preorder(node *r)
{
 if(r!=NULL)
 {
  cout<<r->data<<"\t";
  preorder(r->leftlink);
  preorder(r->rightlink);
 }
}

void btree::postorder(node *r)
{
 if(r!=NULL)
 {
  postorder(r->leftlink);
  postorder(r->rightlink);
  cout<<r->data<<"\t";
 }
}

node *btree::insert(node *t,int x)
{
 if(t==NULL)
 {
  t=new node;
  t->data=x;
  t->leftlink=t->rightlink=NULL;
 }
 else
 {
 if(x<t->data)
  t->leftlink=insert(t->leftlink,x);
 if(x>t->data)
  t->rightlink=insert(t->rightlink,x);
 if(x==t->data)
  cout<<"the number is already present"<<endl;
 }
return t;
}

void main()
{
 node *t=NULL;
 btree f;
 int ch,x;
 do
  {
   cout<<"\n BINARY TREE TRAVERSAL"<<endl<<endl;
   cout<<"\n 1.INSERT \n 2.INORDER \n 3.PREORDER \n 4.POSTORDER \n 5.EXIT"<<endl;
   cout<<"Enter your choice:"<<endl;
   cin>>ch;
   switch(ch)
   {
    case 1:
     cout<<"Enter a number to insert :\n";
     cin>>x;
     t=f.insert(t,x);
     break;
    case 2:
     cout<<"Inorder Traversal \n";
     f.inorder(t);
     break;
    case 3:
     cout<<"Preorder Traversal \n";
     f.preorder(t);
     break;
    case 4:
     cout<<"Postorder Traversal \n";
     f.postorder(t);
     break;
   }
  getch();
 }
 while(ch!=5);
}

