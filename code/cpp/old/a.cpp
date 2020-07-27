#include <iostream>

using  namespace std;

void arrangement(int n){
    int index = 0;
    for(int i = 0 ; i < 9 ; i++){
        if( n > 12*i && n <= 12*(i+1))
            index = i;
    }
    cout << (2*index+1)*12 + 1 - n ;
    
    int st = 0;
    st = n - (12*index);
    st = st-6 + 1;
    if(st > 3){
         st = st - 3;
         st = 4 - st;
    } 
    if(st == 1) cout<<" WS\n";
    else if(st == 2) cout<<" MS\n";
    else if(st ==3) cout<<" AS\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        arrangement(18);
	arrangement(40);
    }
}
