#include <iostream>
using namespace std;

void printArray(int *arr, int size_of_array){
  cout << "Array = {";
  for(int i; i<size_of_array; i++){
    cout<< arr[i] <<",";
    if (i==size_of_array -1){
      cout<<'\b';
    }
  }
  cout <<"}\n";
}


int binarySearch(int *arr, int lowerBound, int upperBound, int val)
{
    if (upperBound >= lowerBound) {
        int mid = lowerBound + (upperBound - lowerBound) / 2;
        if (arr[mid] == val)
            return mid;

        if (arr[mid] > val)
            return binarySearch(arr, lowerBound, mid - 1, val);
        return binarySearch(arr, mid + 1, upperBound, val);
    }
    return -1;
}

int main(){
  int arr[] = {1,3,7,9,9,15,24};
  int searching_val = 24;
  int size= sizeof(arr)/sizeof(int);
  printArray(arr, size);
  int index = binarySearch(arr,0,size,searching_val);
  if (index!=-1){
    cout << "Value Found at index: " << index;
  }
  else {
    cout <<"Value not found :(";
  }
}