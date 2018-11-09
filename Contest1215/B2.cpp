#include <bit/stdc++.h>

const int MOD = 1000000;
using namespace std;

int main() {
    vector<int> f(26, 1);
    for (int i = 2; i < f.size(); i++)
        f[i] = f[i - 1] * i % MOD;
    for (int i = 1; i < f.size(); i++)
        f[i] = (f[i - 1] + f[i]) % MOD;
    int n;
    while (cin >> n) {
        cout << f[min(n, 25)] << endl;
    }
    return 0;
}