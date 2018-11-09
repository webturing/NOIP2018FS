#include<bits/stdc++.h>

using namespace std;
const int D[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

inline int leap(int y) {
    return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

int main() {
    assert(13 * 4 == sizeof(D));
    int y, m, d;
    cin >> y >> m >> d;
    int tot = d;
    for (int i = 1; i < m; i++)tot += D[i];
    if (m > 2 && leap(y))++tot;
    cout << tot << endl;
    return 0;
}