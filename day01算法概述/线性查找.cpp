#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 6;
    int p = find(a, a + n, k) - a;
    if (p == n) {
        cout << "NOT FOUND" << endl;
    } else {
        cout << k << " firstly appeared at pos=" << p << endl;
    }
    return 0;
}
