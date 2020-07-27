#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> buildArray(vector<int>& target, int n){
    std::vector<string> s;
    int j = 0;
    for(int i = 0 ; i < n; ++i){
        if(target[j] == i+1){
            s.push_back("Push");
            ++j;
        }
        else{
            s.push_back("Push");
            s.push_back("Pop");
        }
        if(j == target.size()){
            break;
        }
    }
    return s; 
}

int main(){
    std::vector<int> target{1,2};
    int n = 4;
    for(auto& i:target) cout << i << ' ';
    cout << endl;
    std::vector<string> sol = buildArray(target, n);
    for(auto& str : sol) cout << str << ' ' ;
    cout << endl;
}
