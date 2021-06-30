#include<iostream>
using namespace std;

int findMin(int * arr,int index,int n)
{
	int minIndex=index;
	for(int i=index+1;i<n;i++)
	{
		if(arr[minIndex]>arr[i])
		{
			minIndex=i;
		}
	}
	return minIndex;
}

void selectionSort(int * arr, int n)
{
	if(n>0)
	{
		int minIndex=0;
		for(int i=0;i<n-1;i++)
		{
			minIndex=findMin(arr,i,n);
			int temp=arr[i];
			arr[i]=arr[minIndex];	
			arr[minIndex]=temp;			
		}
	}
}

void bubbleSort(int * arr,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void display(int * arr,int n)
{
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[3]={112,46,23};
	bubbleSort(arr,3);
	display(arr,3);
	return 0;	
}
