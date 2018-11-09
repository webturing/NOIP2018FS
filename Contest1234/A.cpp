//
// Created by liuhuan on 18-11-7.
//
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        long long m = 2 * n;
        int a = floor(sqrt(m));
        for (int b = a; b > 0; b--) {
            if (m % b)continue;
            int p = b, q = m / b;
            int j = (p + q - 1) / 2;
            int i = (q - p + 1) / 2;
            if (j > i && i + j == q && j - i + 1 == p) {
                cout << i << " " << j << endl;
            }
        }
        cout << endl;
    }
    return 0;
}