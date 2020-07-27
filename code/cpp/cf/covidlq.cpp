// ---------------------- COVID pandemic and Long Queue -------------
#include <iostream>
using namespace std;

bool count(int n, int* a)
{
    int count = 0;
    int start = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            count = i - start;
            start = i;
            ++c;
            if (count < 6 && c > 1) {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int na = 11;
    int nb = 7;
    int nc = 9;
    int ab = 10;

    int a[] = { 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1 };
    int b[] = { 1, 0, 0, 0, 0, 0, 1 };
    int c[] = { 0, 0, 1, 0, 0, 0, 0, 1, 1 };

    cout << count(na, a) << endl
         << count(nb, b) << endl
         << count(nc, c) << endl;
}

// ---------------------- COVID pandemic and Long Queue -------------
