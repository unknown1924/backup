#include<bits/stdc++.h>
using namespace std;
int maxi = INT_MAX;
int maxx(int a, int b)
{ 
    return (a > b)?a:b;
}
void cal_Time(int total, int sum, int i, vector<int> v)
{  
    if(maxx(sum, total-sum) < maxi)	
    {		
        maxi = maxx(sum, total-sum);	
    } 
    if(v[i] <= 0) 
        return; 
    cal_Time(total, sum + v[i], i+1, v); 
    cal_Time(total, sum, i+1, v); 
    return;
}
int main()
{ 
    int total=0, sum = 0, i = 0;
    //vector<int> v{25,30,35,20,90,110,45,70,80,12,30,35,85}; 
    vector<int> v{1,2,3,4,5,10,11,3,6,16}; 
    for(auto it: v)
        total += it;
    cal_Time(total, sum, i, v);	
    cout<<maxi;
}
