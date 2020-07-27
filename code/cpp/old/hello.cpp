#include <iostream>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 0,b = 1;
    std::cout << "hello world";
    swap(a,b) ;
}
