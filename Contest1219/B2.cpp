#include<bits/stdc++.h>

using namespace std;

//复杂度O(nlog(n))
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (size_t i = 0; i < n; i++)cin >> a[i];
    for (size_t i = 0; i < m; i++)cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (n > m)swap(a, b);
    int Min = INT_MAX;
    for (size_t i = 0; i < a.size(); i++) {
        int j = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        Min = min(abs(b[j] - a[i]), Min);
        if (Min == 0)break;
    }
    cout << Min << endl;
    return 0;
}