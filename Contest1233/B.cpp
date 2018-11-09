#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int v[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        int dp[n + 1];
        for (int i = 0; i <= n; i++) {
            dp[i] = 1;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                if (v[j] >= v[i])
                    dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        sort(dp + 1, dp + n + 1);
        cout << dp[n] << endl;
    }
    return 0;
} 