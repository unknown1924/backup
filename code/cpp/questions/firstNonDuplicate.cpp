// this soln works
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    vector<char> a{'a','a','a','b','b','c','d','d'};
    //for(char& i: a) cout << i << ' ' << endl;
    unordered_map<char, int> lookup;
    // insert new elements and increment the count of those already present
    for(int i = 0; i < a.size(); ++i){
        if(lookup.find(a[i]) != lookup.end()){
            lookup.at(a[i]) += 1;
        }
        else {
            pair<char, int> temp (a[i], 1);
            lookup.insert(temp);
        }
    }
    // print all the elements of the hashmap ( not in any order ) 
    //for(auto& i: lookup) cout << i.first << ':' << i.second << endl;
    for(auto& i: a) cout << i << ' ' ;
    cout << endl;
    // check which element is firsNonDuplicate
    for (int i = 0; i < a.size(); ++i) {
        if(lookup[a[i]] == 1){
            cout << "\nThe firstNonDuplicate: " << a[i] << endl;
            break;
        } 
    }

}
