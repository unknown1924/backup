#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> a, int k){
    int e = 100;
    int n = a.size();
    int i = 0;
    do{
        i = (i + k) % n;
        --e;
        if(a[i])
            e -= 2;

    }while(i != 0);
    return e;
}

int main(){
    int k = 2;
    std::vector<int> a{0, 0, 1, 0, 0, 1, 1, 0};
    cout << jumpingOnClouds(a, k);
}
