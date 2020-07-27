#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxProfit(int n, vector<int>& a){
		int sum = 0; 
		sort(a.begin(), a.end());
		reverse(a.begin(), a.end());
		for(int i = 0; i < a.size(); i++){
				sum += a[i] - i;
		}
		return sum;
}
int main(){
		int t; cin >> t;
		while(t--){
				int n; cin >> n;
				vector<int> a;
				for(int k = 0; k < n; k++){
						int temp; cin >> temp;
						a.push_back(temp);
				}
				cout<< maxProfit(n,a) << endl;
		}
}
