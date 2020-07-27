#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool nar(int value){
	int len = 0;
	int val = value;
	vector<int> digits;
	while(val){
		digits.push_back(val%10);
		val = val/10;
		len++;
	}

	int sum = 0;
	for(auto i : digits){
		sum += pow(i,len);
	}
	return sum == value;
}

vector<int> arr(int n) {
	std::vector<int> v;
	while(n){
		v.push_back(n%10);
        n /= 10;
	}
    return v;
}
void print(vector<int> a){

}

int main(){
	int value = 1633;
	//cout << nar(value);
    std::vector<int> v = arr(value);
    for(auto i = v.begin(); i < v.end(); i++){
        cout << *i << ' ';
    }
}
