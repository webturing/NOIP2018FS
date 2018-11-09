//
// Created by liuhuan on 18-11-7.
//
#include<bits/stdc++.h>

using namespace std;
int B[] = {100, 50, 20, 10, 5, 2, 1};

int f(int m) {
    int tot = 0;
    while (m) {
        for (int i = 0; i < 7; i++) {
            tot += m / B[i];
            m %= B[i];
        }
    }
    return tot;
}

int main() {
    int m, t;
    while (cin >> m) {
        if (m == 0)break;
        int tot = 0;
        while (m--) {
            cin >> t;
            tot += f(t);
        }
        cout << tot << endl;
    }
    return 0;
}
