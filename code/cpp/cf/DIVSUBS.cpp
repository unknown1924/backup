#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void divsum(vector<int> v, int n){
    int sum = 0 ;
    sort(v.begin(), v.end());
    for(auto& i:v) cout << i << ' ';
}

int main(){
    //int t; cin >> t;
    //while(t--){
        //int n; cin >> n;

    //}
    int n = 3;
    vector<int> v{4, 6, 10};
    divsum(v, n);
}
