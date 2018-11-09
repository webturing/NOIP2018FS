#include<bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int n = max(a.size(), b.size());
    while (a.size() < n)a.push_back('0');
    while (b.size() < n)b.push_back('0');
    string c(n, '0');
    int sc = 0;
    for (int i = 0; i < n; i++) {
        int temp = sc + a[i] - '0' + b[i] - '0';
        sc = temp / 10;
        c[i] = '0' + temp % 10;
    }
    if (sc)c.push_back(sc + '0');
    reverse(c.begin(), c.end());
    cout << c << endl;
    return 0;
}