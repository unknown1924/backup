#include <iostream>
using namespace std;

int main(){
    int n;
    n = 6;
    int m[n] = {3,6,5,4,1,2};
    for(int i = 0; i<n; ++i){
        m[i] = m[i] -1;
    }

    //char monkeys[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int monkeys[n] = {1,2,3,4,5,6};
    int temp_monkeys[n];
    for(int i = 0; i<n; ++i){
        temp_monkeys[i] = monkeys[i];
    }
    //cout << monkeys[0] << ' ' << temp_monkeys[0] ;
    


}
