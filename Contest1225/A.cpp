#include<bits/stdc++.h>

using namespace std;

int main() {
    int sum = 0;
    int a[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                sum += a[i][j];
            }
        }
    }
    cout << sum << endl;
    return 0;
}