#include<iostream.h>
#include<conio.h>

void printArray(int A[], int size)
{
    for(int i=0;i<size;i++)
    cout<<"\t"<<A[i];
    cout<<"\n";
}

void merge(int arr[],int left,int mid,int right)
{
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;
    int L[20],R[20];

    for(i=0;i<n1;i++)
    L[i]=arr[left+i];
    for(j=0;j<n2;j++)
    R[j]=arr[mid+1+j];

    i=0;
    j=0;
    k=left;

    while(i<n1&&j<n2)
    {
	if(L[i]<=R[j])
	{
	    arr[k]=L[i];
	    i++;
	}
	else
	{
	    arr[k]=R[j];
	    j++;
	}
	k++;
    }
    while(i<n1)
    {
	arr[k]=L[i];
	i++;
	k++;
    }
    while(j<n2)
    {
	arr[k]=R[j];
	j++;
	k++;
    }
}

void mergeSort(int arr[],int left,int right)
{
    if(left<right)
    {
	int mid=left+(right-left)/2;
	mergeSort(arr,left,mid);
	mergeSort(arr,mid+1,right);
	merge(arr,left,mid,right);
    }
}

int main()
{
    int arr[20],n;
    clrscr();
    cout<<"Enter the number of elements :";
    cin>>n;
    cout<<"Enter the elements one by one :\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"The Given Array is :\n";
    printArray(arr,n);
    mergeSort(arr,0,n-1);
    cout<<"\n The sorted array is :\n";
    printArray(arr,n);
    getch();
    return 0;
}
