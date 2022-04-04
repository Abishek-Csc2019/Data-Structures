#include<iostream.h>
#include<conio.h>
int main()
{
    int i,n,x,a[100];
    clrscr();
    cout<<"Enter the number of elements :";
    cin>>n;
    cout<<"Enter the elements :\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    if(a[i]>a[j])
    {
	    int temp =a[i];
	    a[i]=a[j];
	    a[j]=temp;
    }
    cout<<"The sorted list is :\n";
    for(i=0;i<n;i++)
    {
	cout<<a[i]<<"\t";
    }
    cout<<"\n Enter the element to be searched for : ";
    cin>>x;
    int low=0;
    int high=n-1;
    while(low<=high)
    {
	int mid=(low+high)/2;
	if(x<a[mid])
	    high=mid-1;
	else
	if(x>a[mid])
	    low=mid+1;
	else
	{
	    cout<<"The number "<<x<< " is present in the location "<<mid+1;
	    return 0;
	}
	if(low>high)
	{
	    cout<<"The number "<<x<<" is not present in the list \n";
	    return 0;
	}
    } getch();
}

