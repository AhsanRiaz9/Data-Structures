#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
void bubbleSort(int *arr, int size)
{
    int i, j;
    for (i = 0; i < size-1; i++){    
      for (j = 0; j < size-i-1; j++)
        if (arr[j] > arr[j+1])
          swap(&arr[j], &arr[j+1]);
    }
}
 
void printArray(int *arr, int size)
{
  cout << "{";
  for(int i; i<size; i++){
    cout<< arr[i] <<",";
    if (i==size -1){
      cout<<'\b';
    }
  }
  cout <<"}\n";
}
 
int main()
{
    int arr[] = {1, 2, 3, 2, 4, 17, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, size);
    cout<<"Sorted array:";
    printArray(arr, size);
    return 0;
}