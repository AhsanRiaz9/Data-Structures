#include<iostream>
using namespace std;

void insertionSort(int * arr,int n)
{
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

void display(int * arr,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";	
	}
	cout<<'\n';
}

int main()
{
	int arr[6]={2,6,69,23,16,4};
	insertionSort(arr,6);
	display(arr,6);
	return 0;	
}
