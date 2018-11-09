//
// Created by liuhuan on 18-11-7.
//
#include <bits/stdc++.h>

using namespace std;
#define Max 101

int D[Max][Max];
int num;

int MaxSum(int num) {
    for (int i = num - 1; i >= 1; i--)
        for (int j = 1; j <= i; j++) {
            D[i][j] = max(D[i + 1][j], D[i + 1][j + 1]) + D[i][j];
        }
    return D[1][1];
}

int main() {
    cin >> num;
    for (int i = 1; i <= num; i++)
        for (int j = 1; j <= i; j++)
            cin >> D[i][j];
    cout << MaxSum(num) << endl;
    return 0;
}
