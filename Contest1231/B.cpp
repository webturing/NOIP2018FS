#include<bits/stdc++.h>

using namespace std;
const int N = 21;
int a[N][N];

int main() {
    int n, r;
    while (cin >> n >> r) {
        if (2 * r > n)r = n - r;
        long long p = 1;
        for (int i = 0; i < r; i++)p *= n - i;
        for (int i = r; i >= 2; i--)p /= i;
        cout << p << endl;
    }
    return 0;
}