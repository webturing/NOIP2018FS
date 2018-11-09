#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    while (cin >> a >> b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if (a == "0" || b == "0") {
            cout << "0" << endl;
            continue;
        }
        vector<int> c(a.size() + b.size(), 0);
        for (size_t i = 0; i < a.size(); i++)
            for (size_t j = 0; j < b.size(); j++)
                c[j + i] += (a[i] - '0') * (b[j] - '0');
        for (size_t i = 0; i < c.size(); i++) {
            c[i + 1] += c[i] / 10;
            c[i] = c[i] % 10;
        }
        if (c.back() == 0)c.erase(c.end() - 1);
        copy(c.rbegin(), c.rend(), ostream_iterator<int>(cout, ""));
        cout << endl;
    }
    return 0;
}