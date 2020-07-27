#include<bits/stdc++.h>
using namespace std;
int minTime = INT_MAX;

int maxval(int a, int b){
    return a > b ? a:b;
}


void calcMinTime(int total_sum, int sum, int i , vector<int> v){
    if(maxval(sum, total_sum - sum) < minTime)
        minTime = maxval(sum, total_sum - sum);

    if(v[i] <= 0 ) return;
    calcMinTime(total_sum, sum+v[i], i+1, v);
    calcMinTime(total_sum, sum, i+1, v);
    return;
}

int main(){
    int sum = 0;
    int total_sum = 0;
    vector<int> vehicles;
    string s;
    cin >> s;
    stringstream line(s);
    int n;
    while(line >> n){
        total_sum += n;
        vehicles.push_back(n);
    }
    calcMinTime(total_sum, sum, 0, vehicles);
    cout << minTime << endl;
}
