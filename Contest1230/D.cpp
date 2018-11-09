#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a, b;
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for (int i = 0; i < s1.size(); i++) {
        a.push_back(s1[i] - '0');
    }
    for (int i = 0; i < s2.size(); i++) {
        b.push_back(s2[i] - '0');
    }
    int sc = 0;
    vector<int> c;
    int len = max(a.size(), b.size());
    a.resize(len);
    b.resize(len);
    for (int i = 0; i < len; i++) {
        int t = a[i] + b[i] + sc;
        c.push_back(t % 10);
        sc = t / 10;
    }
    if (sc)
        c.push_back(sc);
    reverse(c.begin(), c.end());
    for (int i = 0; i < c.size(); i++) {
        cout << c[i];
    }
    cout << endl;
    return 0;
}