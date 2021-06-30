#include<iostream>
using namespace std;
int partition(int * arr,int start,int end)
{
	int i = start-1;
	int pivot = arr[end];
	for(int j=start;j<end;j++)
	{
		if(arr[j]<=pivot)
		{
			i = i + 1;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	i = i + 1;
	int temp = arr[i];
	arr[i] = arr[end];
	arr[end] = temp;
	return i;
}

void quickSort(int * arr, int start,int end)
{
	if(start<=end)
	{
		int p = partition(arr,start,end);
		quickSort(arr,start,p-1);
		quickSort(arr,p+1,end);
	}
	
}

void display(int * arr,int size)
{
	cout<<'\n';
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
int main()
{
	int arr[6]={77,2,16,99,36,81};
	display(arr,6);
	quickSort(arr,0,5);
	display(arr,6);
	return 0;
}
