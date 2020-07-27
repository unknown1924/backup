// given two list a[] and b[] 
// return True if a[i] + b[j] = v { for some i, j, v }

#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    // a = {0, 0, -5, 30212};
    // b = {-10, 40, -3, 9};
    // v = -8;
    int a[] = {0, 0, -5, 30212};
    int b[] = {-10, 40, -3, 9};
    int v = -8;
    cout << "\n>>>> list a[]: \n";
    for (const int& x: a) cout << x <<"     ";

    cout << "\n>>>> list b[]: \n";
    for (const int& x: b) cout << x <<"     ";

    unordered_set<int> list;
    for (int i = 0; i < 4; ++i) {
        list.insert(v - a[i]); 
    } 
    cout << "\n>>>> The contents of list: \n";
    for (const int& x: list) cout << x <<' ';
    // check if req element found in the list
    for (int j = 0; j < 4; j++) {
        unordered_set<int>::const_iterator found = list.find(b[j]);
        if(found != list.end()){
            cout << "\n     True" << endl;
            break;
        }
        if(j == 3)
            cout << "\n     False" << endl;
    }
    return 0;
}
