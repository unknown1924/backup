#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> a){
    for(auto i = a.begin(); i < a.end(); i++){
        cout << *i << ' ' << endl;
    }
}

vector<int> ans(vector<int> a){
    int len = a.size();
    vector<int> sol(len);
    for(int i = 0; i < len; i++){
        int index1 = i+1;                                                       
        vector<int>::iterator it = find(a.begin(), a.end(), index1);            
        int index2 = distance(a.begin(), it) + 1;                               
        it = find(a.begin(), a.end(), index2);            
        int index3 = distance(a.begin(), it) + 1;                               
        sol[i] = index3;
    }
    return sol;
}

int main(){
    vector<int> a{2, 3, 1};
    vector<int> temp = ans(a);

    print(temp);
}
