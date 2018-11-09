#include <bits/stdc++.h>

using namespace std;

int main() {
    int B[] = {1, 2, 4, 5, 10};
    int n;
    cin >> n;
    vector<int> F(n + 1, 0);
    for (int i = 1; i <= n; i++) F[i] = i;
    for (int i = 0; i < 5; i++) F[B[i]] = 1;
    for (int i = 3; i <= n; i++) {
        int m = F[i];
        for (int j = 0; j < 5; j++) {
            if (i < B[j]) continue;
            m = min(m, F[i - B[j]] + 1);
        }
        F[i] = m;
    }
    cout << F[n] << endl;
    return 0;
}