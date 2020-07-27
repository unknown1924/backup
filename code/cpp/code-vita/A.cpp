#include <iostream>

using namespace std;

int main(){
    int a[4][4] = {{0,3,9,6}, {1,4,4,5}, {8,2,5,4}, {1,8,5,9}};
    //cout << a[0][1];
    int minSum = 0;
    int posx = 0, posy = 0;
    for(int i = posx; i<4 ; ++i){
        for(int j = posy; j<4 ; ++j){
            if(a[i+1][j] < a[i][j+1]){
                i += 1;
                posx = i;
                j = 4;
            }
            else {
                j += 1;
                posy = j;
            }
        }
    }
    cout << minSum << endl;
}
