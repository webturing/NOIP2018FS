#include<bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    while (getline(cin, s) && getline(cin, t)) {
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] != t[0]) {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}
