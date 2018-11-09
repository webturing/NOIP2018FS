#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000;

int main(int argc, char const *argv[]) {
    int A[26] = {1};
    for (int i = 1; i < 26; i++) A[i] = (A[i - 1] * i) % MOD;
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= 25 && i <= n; i++) {
        sum = (sum + A[i]) % MOD;
    }
    cout << sum << endl;
    return 0;
}