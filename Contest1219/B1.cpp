#include<bits/stdc++.h>

using namespace std;

//复杂度O(nm)
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (size_t i = 0; i < n; i++)cin >> a[i];
    for (size_t i = 0; i < m; i++)cin >> b[i];
    int Min = INT_MAX;
    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < n; j++) {
            Min = min(abs(a[i] - b[j]), Min);
        }

    cout << Min << endl;
    return 0;
}