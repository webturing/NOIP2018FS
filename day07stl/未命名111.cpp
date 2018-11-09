#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int k = 0;
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            if (j <= i) cout << j;
            else {
                k = k + 2;
                cout << j - k;
            }

        cout << endl;
    }
    return 0;
}


