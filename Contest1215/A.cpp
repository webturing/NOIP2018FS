#include <bits/stdc++.h>

using namespace std;
typedef long long LL;

int main() {
    LL n;
    while (cin >> n) {
        int tot = 0;
        while (n > 1) {
            if (n % 2 == 0)
                n /= 2;
            else
                n = 3 * n + 1;
            ++tot;
        }
        cout << tot << endl;
    }
    return 0;
}