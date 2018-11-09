#include<bits/stdc++.h>

using namespace std;

int fact(int n) {
    return n <= 1 ? 1 : fact(n - 1) * n;
}

int C(int n, int r) {
    return fact(n) / fact(r) / fact(n - r);
}

int main() {
    int n;
    cin >> n;
    n--;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << C(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}