#include<bits/stdc++.h>

using namespace std;

bool cmp(const string &a, const string &b) {
    if (a.size() != b.size())return a.size() < b.size();
    return a < b;
}

int main() {
    int n;
    while (cin >> n) {
        vector <string> v(n);
        for (int i = 0; i < n; i++)cin >> v[i];
        sort(v.begin(), v.end(), cmp);
        for (int i = 0; i < n; i++)cout << v[i] << endl;
    }
    return 0;
}
