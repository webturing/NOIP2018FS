#include<bits/stdc++.h>

using namespace std;
const int MOD = 1000000;

int main() {
    int n;
    cin >> n;
    if (n > 24)n = 24;//25!尾部已经含有6个0
    int s = 0;
    for (int i = 1; i <= n; i++) {
        int p = 1;
        for (int j = 2; j <= i; j++) {
            p = (p * j) % MOD;
        }
        s = (s + p) % MOD;
    }
    cout << s << endl;
    return 0;
}