#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> a){
    for(auto i = a.begin(); i < a.end(); i++){
        cout << *i << ' ';
    }
    cout << endl;
}

void insert(vector<int>& a, int i, int j){
    int exch = a[j];
    for (int k = j; k > i; --k) {
       a[k] = a[k-1]; 
    }
    a[i] = exch;
}

void insSort(vector<int> a){
    //int size = a.size();
    //int start = 0;
    int i =0;
    for(int j = 1; j < a.size(); ++j){
        for(i = 0; i < j; ++i){
            if(a[j] <= a[i]){
                insert(a, i, j);
                //i = 0;
            }
        }
    }
   print(a);
}

int main(){
    std::vector<int> v{8, 4, 7, 2, 1, 5, 3, 9};
    //std::vector<int> v{8, 4, 7, 2};
    print(v);
    insSort(v);
}
