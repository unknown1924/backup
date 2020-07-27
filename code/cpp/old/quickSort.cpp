#include <iostream>

using namespace std;

void swap(int* a , int* b){
		int temp = *a;
		*a = *b;
		*b = temp;
}

int partition(int a[], int start, int end){
		int i = start - 1;
		int pivot = a[end];

		for(int j = start + 1; j < end; j++){
				if(a[j] < pivot){
						++i;
						swap(a[i], a[j]);
				}
		}
		swap(a[end], a[i+1]);
		return i+1;
}

void quickSort(int a[], int start, int end){
		if( start < end ){
				int index = partition(a, start, end);
				quickSort(a, start, index-1);
				quickSort(a, index+1,end);
		}
}

void print(int a[], int size){
		for (int i = 0; i < size; i++) {
				cout << a[i] << ' ' ;
    }
}

int main(){
    int a[] = {4, 2, 6, 3, 1, 8, 5, 9};
    int size = sizeof(a)/sizeof(a[0]);
	print(a, size);
    quickSort(a, 0, 7);
	cout << endl;
    print(a, size);
}
