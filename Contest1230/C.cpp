#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int a[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        int flag = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (a[i][j] != a[j][i]) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)break;
        }
        if (flag == 1) {
            cout << "No!" << endl;
        } else {
            cout << "Yes!" << endl;
        }
    }
    return 0;
}
