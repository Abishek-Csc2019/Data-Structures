#include<iostream.h>
#include<conio.h>
void quicksort(int a[],int l,int r)
{
int pi,i,j,temp;
if(l<r)
{
pi=l,i=l,j=r;
while(i<j)
{
while((a[i]<=a[pi])&&(i<r))
i++;
while(a[j]>a[pi])
j--;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
temp=a[pi];
a[pi]=a[j];
a[j]=temp;
quicksort(a,l,j-1);
quicksort(a,j+1,r);
}
}
void main()
{
int n,a[100];
clrscr();
cout<<"Enter the number of elements:"<<endl;
cin>>n;
cout<<"Enter the elements one by one "<<endl;
for(int i=0;i<n;i++)
cin>>a[i];
quicksort(a,0,n-1);
cout<<"The sorted elements are :"<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<endl;
getch();
}