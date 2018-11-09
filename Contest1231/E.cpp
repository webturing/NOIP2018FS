//
// Created by 33470 on 11/6/2018.
//

#include<bits/stdc++.h>

using namespace std;

int poww2(int a, int b, int m) {
    int ans = 1, base = a % m;
    while (b != 0) {
        if (b & 1 != 0)
            ans = (ans * base) % m;
        base = (base * base) % m;
        b >>= 1;
    }
    return ans;
}

int poww(int a, int b, int m) {
    a %= m;
    if (b == 0 || a == 1)return 1;
    if (a == 0 || b == 1)return a;
    if (b % 2 == 0)return poww(a * a % m, b / 2, m);
    return (poww(a * a % m, b / 2, m) * a) % m;
}

int main() {
    int a, p, m;
    while (cin >> a >> p >> m) {
        if (a == 0 && p == 0 && m == 0)break;
        cout << poww(a, p, m) << endl;
    }
    return 0;
}