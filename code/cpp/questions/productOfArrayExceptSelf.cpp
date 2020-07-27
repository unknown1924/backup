// find the product of elements in array except the element itself
// eg  input [1, 2, 3, 4]
//    output [24, 12, 8, 6]

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> a){
    for(auto i = a.begin(); i < a.end(); i++)
        cout << *i << ' ' ;
    cout << endl;
}

void specialProduct(vector<int> a){
    std::vector<int> v; 
    for (int i = 0; i < a.size(); ++i) {
        int sum = 1;
        for (int j = 0; j < a.size(); ++j) {     
            if(j == i) sum *= 1;
            else {
                sum *= a[j];
            }
        } 
        v.push_back(sum);
    }
    print(a);
    print(v);
}

int main(){
    std::vector<int> a = {1, 2, 3, 4};
    specialProduct(a);

}
