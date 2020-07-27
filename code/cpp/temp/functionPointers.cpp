#include <iostream>
using namespace std;

void helloWorld(){
   cout << "hello world" << endl;
}
int main(){
    helloWorld();
    // assigning helloworld function addresss to function of auto type
    auto function = helloWorld;
    function();
    return 0;
}
