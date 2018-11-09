#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    int Max = a[0][0];
    int r = 0, c = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] > Max) {
                Max = a[i][j];
                r = i;
                c = j;
            }
        }
    }
    cout << Max << endl;
    cout << c + 1 << endl;
    cout << r + 1 << endl;
    return 0;
} 