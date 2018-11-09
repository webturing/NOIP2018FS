#include<bits/stdc++.h>

using namespace std;

int main() {///O(n^3)  n<=10^3
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            ///calculate [i:j]
            int s = 0;
            for (int k = i; k <= j; k++) {
                s += k;
            }
            if (s == n) {
                cout << i << " " << j << endl;
            }
        }
    }
    return 0;
}
