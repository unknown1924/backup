#include <iostream>
void bubblesort(int* a) {
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10 - i -1 ; j++)  {
            if(a[j+1] < a[j]){
                int temp =  a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < 10; i++){
        std::cout << a[i] << std::endl;
    }
}
int main(){
    int a[10]  = {8, 5, 4, 2 , 6, 3, 9, 2, 7, 1};
    
    std::cout << "Sorted:" << std::endl;
    bubblesort(a) ;
    return 0;
}
