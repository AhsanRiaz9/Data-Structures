#include <iostream>
using namespace std;

int linearSearch(int *arr, int size, int val){
  bool flag = false;
  int index = -1;
  for(int i=0; i<size && !flag;i++){
    if (arr[i] == val){
      flag = true;
      index = i;
    }
  }
  return index;
}

void printArray(int *arr, int size_of_array){
  cout << "Array = {";
  for(int i; i<size_of_array; i++){
    cout<< arr[i] <<",";
    if (i==size_of_array-1){
      cout<<'\b';
    }
  }
  cout <<"}\n";
}

int main() {
  int arr[]={77,2,16,99,36,81};
  int size_of_array = sizeof(arr)/sizeof(int);
  int searching_val = 36, index;
	printArray(arr,size_of_array);
	index = linearSearch(arr,size_of_array,searching_val);
  if(index!=-1){
    cout<< "Value found at index " << index <<'\n';
  }
  else {
    cout << "Value not found";
  }
	return 0;
}