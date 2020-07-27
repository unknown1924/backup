#include <iostream>
#include <vector>
using namespace std;

void swap(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void print(int* a, int n){
  for (int i = 0; i < n; i++) {
    cout << *(a+i) << ' ';
  }
}
int partition(int arr[], int low, int high){
  int pivot = arr[high];
  int i = low, j = high;
  while(i < j){
    while (arr[i] < pivot) {
      i++;
    }
    while (arr[j] > pivot) {
      j--;
    }
    swap(arr[i], arr[j]);
  }
  swap(arr[high], arr[j]);
  return j;
}

void qs(int arr[], int low, int high){
  if(low < high){
    int pi = partition(arr, low, high);

    qs(arr, low, pi-1);
    qs(arr, pi+1, high);
  }
  //cout << "\n sorted array: " << endl;
  //print(arr, high+1);
}

int main() {
  int arr[] = {10, 7, 8, 9, 1, 5};
  int n = sizeof(arr)/sizeof(arr[0]);
  print(arr, n);
  qs(arr, 0, 5);
  print(arr, n);
}
