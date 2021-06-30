#include<iostream>
using namespace std;
void merge(int * arr,int start, int mid, int end)
{
	int n1 = mid - start + 1;
	int n2 = end - mid;
	int * p = new int[n1];
	int * q = new int[n2];
	for(int i=0;i<n1;i++)
	{
		p[i] = arr[start+i];	
	}
	for(int j=0;j<n2;j++)
	{
		q[j] = arr[mid+1+j];
	}
	bool flag = false;
	int min = n1-1;
	if(min>n2)
	{
		min = n2-1;
		flag = true;
	}
	int i = 0;
	int j = 0;
	int k = start;
	while(k<=min)
	{
		if(arr[i]<arr[j])
		{
			arr[k] = arr[i];
			i++;
		}
		else
		{
			arr[k] = arr[j];
			j++;
		}
		k = k+1;
	}
	while(k<=end)
	{
		if(flag == true)
		{
			arr[k] = q[j];
			j = j+1;
		}
		else
		{
			arr[k] = p[i];
			i = i + 1;
		}
		k = k + 1;
	}	
	

}
void mergeSort(int * arr,int start,int end)
{
	if(start<end)
	{
		int mid = (start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
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
	int arr[5]={772,16,9,36,81};
	display(arr,5);
	mergeSort(arr,0,4);
	display(arr,5);
	return 0;
}
