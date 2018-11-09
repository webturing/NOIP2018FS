#include <bits/stdc++.h>

using namespace std;

bool ok(const string &s) {
    string t(s.rbegin(), s.rend());
    return s == t;
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        while (ok(s)) s = s.substr(0, s.length() / 2);
        cout << s.length() << endl;
    }

    return 0;
}