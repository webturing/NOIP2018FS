#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                int t = s[i] - 'a' + 1;
                s[i] = 'a' + 26 - t;
            } else {
                int t = s[i] - 'A' + 1;
                s[i] = 'A' + 26 - t;
            }
        }
    }
    cout << s << endl;
    return 0;
} 