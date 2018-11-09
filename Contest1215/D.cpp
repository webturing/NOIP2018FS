#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        double pi = 0.0;
        for (int i = 1; i <= n; i += 2) {
            if (i % 4 == 1) {
                pi += 1.0 / i;
            } else {
                pi -= 1.0 / i;
            }
        }
        cout << fixed << 4 * pi << endl;
    }
    return 0;
}