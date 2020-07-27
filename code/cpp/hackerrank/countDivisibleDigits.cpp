#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> a){
    for(auto i = a.begin(); i < a.end(); i++)
        cout << *i << ' ' ;
    cout << endl;
}
vector<int> getDigits(int a){
    vector<int> digits;
    while(a){
        digits.push_back(a % 10);
        a /= 10;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

int countDigits(int a){
    int count = 0;
    vector<int> digits;
    digits = getDigits(a);
    for(int i = 0; i < digits.size(); i++){
        if(digits[i] != 0 && a % digits[i] == 0)
            ++count;
    }
    //print(digits);
    return count;
}

int main(){
    int input = 1012;
    int temp = countDigits(input);
    cout << temp;
}
