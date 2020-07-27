#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n = 5, d = 4;
    //int a[] = {1,2,3,4,5};
    vector<int> a{1,2,3,4,5};
    vector<int>::iterator ia = a.begin();
    vector<int> sol;
    vector<int>::iterator is = sol.begin();

    //while(d--){
            //int temp = a[0];
        //for (int i = 0; i < n-1; ++i) {
            //a[i] = a[i+1];
        //}
        //a[n-1] = temp;
    //}
    sol.insert(is, a.begin()+d, a.end());
    is = sol.begin();
    sol.insert(is + n - d, a.begin(), a.end()-n+d);
    for(int& x: a) cout << x << ' ';
    cout << endl;
    for(int& x: sol) cout << x << ' ';

}
