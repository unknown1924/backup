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

int main(){
    int value = 1633;
    //cout << nar(value);
    if(5>2){
        cout << "hello world";
    }
}
