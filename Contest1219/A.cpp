#include<bits/stdc++.h>

using namespace std;

int main() {
    for (string s; cin >> s;) {
        char mc = *max_element(s.begin(), s.end());
        for (size_t i = 0; i < s.size(); i++) {
            cout << s[i];
            if (s[i] == mc) {
                cout << "(max)";
            }
        }
        cout << endl;
    }
    return 0;
}