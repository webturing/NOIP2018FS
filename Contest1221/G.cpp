#include<bits/stdc++.h>

using namespace std;
const int MAX_N = 20;
int a[MAX_N];
int n, k;

bool dfs(int i, int sum) {
    if (i == n)return sum == k;
    return dfs(i + 1, sum) || dfs(i + 1, sum + a[i]);
}

int main() {
    while (cin >> n) {
        int tot = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tot += a[i];
        }
        if (tot % 2 == 0) {
            k = tot / 2;
            if (dfs(0, 0))
                cout << "Of course,I can!" << endl;
            else
                cout << "Sorry,I can't!" << endl;
        } else
            cout << "Sorry,I can't!" << endl;
    }
    return 0;
}