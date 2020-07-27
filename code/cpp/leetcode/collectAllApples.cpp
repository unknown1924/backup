#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple){
   int mintime = 0; 
   vector<vector<int>> tree{{1,2},{4,5},{3,6}};
   
}

int main(){
    int n = 7;
    vector<vector<int>> edges{{0,1},{0,2},{1,4},{1,5},{2,3},{2,6}};
    for(auto& i: edges){
        for(auto& j: i) cout << j << ' ';
    }
    vector<bool> hasApple{false,false,true,false,true,true,false};
}
