#include <bits/stdc++.h>

using namespace std;
const int MINE = 9;

int main() {
    int n, m, k;
    while (cin >> n >> m >> k) {
        int B[n + 2][m + 2] = {0};
        while (k--) {
            int x, y;
            cin >> x >> y;
            B[x + 1][y + 1] = MINE;
        }
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++) {
                if (B[i][j] == MINE) continue;
                int cnt = 0;
                for (int x = i - 1; x <= i + 1; x++)
                    for (int y = j - 1; y <= j + 1; y++)
                        if (B[x][y] == MINE) ++cnt;
                B[i][j] = cnt;
            }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++)
                if (B[i][j] == MINE)
                    cout << '*';
                else
                    cout << B[i][j];
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}