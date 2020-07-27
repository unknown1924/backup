#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void p(vector<int> a){
    for(auto i = a.begin(); i < a.end(); i++){
        cout << *i << ' ' ;
    }
}
void binarySearch(vector<int> a, int search){
    int size = a.size();
    int start = 0, end = size-1;
    bool found = false;
    while(!found){
    int mid = (start + end)/2;
        if(a[mid] == search)
            found = true;
        else if(a[mid] < search)
            start = mid + 1;
        else
            end = mid - 1;
        if(start == end)
            break;
    }
    cout << endl << found << endl;

}
int main(){
    vector<int> a = {8, 7,3, 1, 9, 4, 2, 6, 5};
    p(a);
    sort(a.begin(), a.end());
    p(a);
    binarySearch(a, 48);

    
}
