#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    while (cin >> a >> b >> c) {
        cout << a / b << ".";
        a %= b;
        vector<int> d;
        while (d.size() <= c) {
            int r = 10 * a;
            a = r % b;
            r /= b;
            d.push_back(r);
        }
        if (d.back() >= 5) {
            int sc = 1;
            for (int i = c - 1; sc > 0 && i >= 0; i--) {
                d[i] += sc;
                sc = d[i] / 10;
                d[i] %= 10;
            }
        }
        d.erase(d.end() - 1);
        copy(d.begin(), d.end(), ostream_iterator<int>(cout, ""));
        cout << endl;
    }
    return 0;
}