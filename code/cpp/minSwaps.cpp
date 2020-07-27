#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int minSwaps(vector<int>& a)
{
    int min = 0;
    while (!is_sorted(a.begin(), a.end())) {
        for (int i = 0; i < 4; i++) {
            if (a[i] - 1 != i) {
                swap(a[i], a[a[i] - 1]);
                min++;
            }
        }
    }
    return min;
}

int main()
{
    vector<int> a { 4, 3, 2, 1 };
    cout << "Min swaps required: " << minSwaps(a);
}
