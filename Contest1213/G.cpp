#include <bits/stdc++.h>

using namespace std;

int f(int n, int m) {
    if (m == 1) return 1;
    if (n == 1 || n == 0) return 1;
    if (n < m) return f(n, n);
    return f(n, m - 1) + f(n - m, m);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int m, n;
        cin >> m >> n;
        cout << f(m, n) << endl;
    }
    return 0;
}