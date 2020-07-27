#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(vector<int> a){
    for(auto& i: a) cout << i << ' ' ;
    cout << endl;
}

void sortedMatrix(vector<int> a, int n){
    int min = a[0];
    std::vector<int> sol;
    std::vector<int> temp;
    temp.push_back(a[1]);
    for (int i = 0; i < n; ++i) {
        temp.push_back(*min_element(a.begin()+(i*n), a.begin()+((i+1)*n)));
    }
    print(temp);

}

int main(){
    vector<int> a{1,3,4,2,6,7,5,8,9};
    int n = 3;
    sortedMatrix(a, n);

}
