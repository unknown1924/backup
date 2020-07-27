// Written and Submitted by debasis
#include <iostream>
#include <string>
using namespace std;

int unmatched_pairs(string &b, string &g, int &n){
    int left_unmatched = 0;

    //check if string(grooms) empty 
    while(!g.empty()){
        int i = 0;
        while(b[0] != g[i]){
            if(i < n) ++i;     // get the matched groom index 
            else return i;     // return the number of unmatched paris
        }

        // deleting the matched groom entry would be more efficient
        // but let's just create a new one(simpler)
        string new_g = "";

        if(i == n-1){
           new_g.append(g, 0, n-1);     // for last groom
        }
        else {
           new_g.append(g, i+1, n-i-1);
           new_g.append(g, 0, i);
        }
       
       string new_b = b.substr(1, n-1);

       // update bride and groom list and n

       g = new_g;
       b = new_b;
       n = new_b.size();
    }
    return left_unmatched;
}

int main(){
    int n; cin >> n;
    string b, g;
    cin >> b >> g;
    int n_left = n;
    cout << unmatched_pairs(b, g, n_left);
}

