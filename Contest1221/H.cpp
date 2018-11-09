#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> F(1, 1);
    for (int i = 2; i <= 9; i++) {
        F.push_back(F[F.size() - 1] * i);
    }
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        for (int i = F.size() - 1; i >= 0; i--) {
            if (F[i] <= n) {
                n -= F[i];
            }
        }
        if (n == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}