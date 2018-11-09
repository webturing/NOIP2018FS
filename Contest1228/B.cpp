#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    if (n == 1 || n == 2) {
        return n;
    } else {
        return f(n - 1) + f(n - 2);
    }
}

int main() {
    int i, n, c;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> c;
        cout << f(c) << endl;
    }
    return 0;
}