#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("input.txt");
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> a[i][j];
        }
    }

    int sum[n + 1][n + 1];
    sum[1][1] = a[1][1];
    for (int i = 2; i <= n; i++) {
        sum[i][1] = sum[i - 1][1] + a[i][1];
        for (int j = 2; j < i; j++) {
            sum[i][j] = max(sum[i - 1][j - 1], sum[i - 1][j]) + a[i][j];
        }
        sum[i][i] = sum[i - 1][i - 1] + a[i][i];
    }
    cout << *max_element(sum[n] + 1, sum[n] + n + 1) << endl;
}