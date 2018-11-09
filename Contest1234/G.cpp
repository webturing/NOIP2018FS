//
// Created by liuhuan on 18-11-7.
//
#include <bits/stdc++.h>

using namespace std;
const int MOD = 100000007;

int main() {
    int F[100002][2] = {0};
    F[1][0] = 1, F[1][1] = 1;/*将n=1单独写*/
    F[2][0] = 2;/*进行递推*/
    F[2][1] = 1;
    int n;
    cin >> n;
    for (int i = 3; i <= n; i++) {
        F[i][0] = (F[i - 1][0] + F[i - 1][1]) % MOD;
        F[i][1] = F[i - 1][0];
    }
    cout << (F[n][0] + F[n][1]) % MOD << endl;

    return 0;
}