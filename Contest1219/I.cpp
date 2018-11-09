#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)cin >> a[i];
        for (int i = 0; i < n; i++)cin >> b[i];
        sort(a.begin(), a.end(), less<int>());
        sort(b.begin(), b.end(), greater<int>());
        int s = 0;
        for (int i = 0; i < n; i++)
            s += a[i] * b[i];
        cout << s << endl;
    }
    return 0;
}