#include <iostream>

using namespace std;

void print(int a[], int n){
  for(int i = 0; i < n; i++){
    cout << a[i] << ' ';
  }
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
int partition ( int A[],int start ,int end) {
    int i = start + 1;
    int piv = A[start] ;            //make the first element as pivot element.
    for(int j =start + 1; j <= end ; j++ )  {
    //rearrange the array by putting elements which are less than pivot
    //   on one side and which are greater that on other. 

          if ( A[ j ] < piv) {
                 swap (A[ i ],A [ j ]);
            i += 1;
        }
   }
   swap ( A[ start ] ,A[ i-1 ] ) ;  //put the pivot element in its proper place.
   return i-1;                      //return the position of the pivot
}

*/
int partition(int a[], int start, int end){
    int i = start-1;
    int pivot = a[end];
    for(int j = start+1; j < end; j++){
        if(a[j] < pivot){
            ++i;
            swap(a[i], a[j]);
        }
    }
    swap(a[end], a[i+1]);
    return i+1;
}
void quick_sort ( int A[] ,int start , int end ) {
   if( start < end ) {
        //stores the position of pivot element
         int piv_pos = partition (A,start , end ) ;
         quick_sort (A,start , piv_pos -1);    //sorts the left side of pivot.
         quick_sort ( A,piv_pos +1 , end) ; //sorts the right side of pivot.
   }
}

int main(){
  int a[5] = {5, 3, 7, 2, 4};
  int n = sizeof(a)/sizeof(a[0]);
  print(a, n);
  quick_sort(a, 0, 4);
  cout << "Sorted array is:" << endl;
  print(a, n);
}
