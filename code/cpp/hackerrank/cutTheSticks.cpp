#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> a){
    for(auto i = a.begin(); i < a.end(); i++){
        cout << *i << ' ';
    }
    cout << endl;
}
vector<int> remainingSticks(vector<int> a){
    std::vector<int> sol;
    while(a.size() != 1){

        //store the current size of the vector
        sol.push_back(a.size());

        //find the min element in the range
        int min = *min_element(a.begin(), a.end());

        //Decrement all elements by min element value
        for(int i = 0; i < a.size(); i++){
            a[i] -= min;
        }

        //get  rid of 0 value elements
        vector<int>::iterator it = a.begin();
        a.erase(remove(a.begin(), a.end(), 0), a.end());
        a.shrink_to_fit();
        if(a.size() == 0) return sol;
    }
    sol.push_back(1);
    return sol;
}

void temp(vector<int> a){
    int n = a.size();
    int min = *min_element(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++){
        a[i] -= min;
    }
    print(a);
    vector<int>::iterator it = a.begin();
    a.erase(remove(a.begin(), a.end(), 0), a.end());
    a.shrink_to_fit();
    print(a);
}

int main(){
    //std::vector<int> a{5,4,4,2,2,8};
    std::vector<int> a;
    for (int i = 0; i < 1000; i++) {
        a.push_back(1);
    }
    std::vector<int> v = remainingSticks(a);
    print(v);
    //temp(a);


}
