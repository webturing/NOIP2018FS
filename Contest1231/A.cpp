#include<bits/stdc++.h>

using namespace std;
const int N = 21;
int a[N][N];

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i <= n; i++) {
            a[i][i] = a[i][0] = 1;
        }
        for (int i = 1; i <= n; i++)
            for (int j = 1; j < i; j++) {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                if (j)cout << " ";
                cout << a[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}