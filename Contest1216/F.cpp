#include <bits/stdc++.h>

using namespace std;

bool ok(const string &s) {
    if (s.length() == 0 || s.length() % 2 != 0) return false;
    for (int i = 0; i < s.length() / 2; i++)
        if (s[i] != s[s.length() - 1 - i]) return false;
    return true;
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        while (ok(s)) s = s.substr(0, s.length() / 2);
        cout << s.length() << endl;

    }
    return 0;
}