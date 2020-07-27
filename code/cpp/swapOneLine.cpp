#include <iostream>

using namespace std;

//helo world
int main()
{
    int a = 5, b = 7;

    a -= b = (a += b) - b;
    cout << a << ' ' << b << endl;
}
