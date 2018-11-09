#include<bits/stdc++.h>

using namespace std;
map<int, bool> M;

int main() {
    int a, b, n;
    while (cin >> a >> b >> n) {
        if (a == 0 && b == 0 && n == 0)break;
        vector<int> v(n + 1, 1);
        for (int i = 2; i <= n; i++) {
            v[i] = (a * v[i - 1] + b * v[i - 2]) % 7;
        }


    }

    return 0;
}
