#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        double sum = 0;
        for (int i = n; i <= m; i++) {
            sum += 1.0 / i / i;
        }
        cout << fixed << setprecision(5) << sum << endl;
    }
    return 0;
}