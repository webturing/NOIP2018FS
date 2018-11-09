#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            if (s[i] <= 'z' && s[i] >= 'w') {
                s[i] += 4 - 26;
            } else if (s[i] <= 'Z' && s[i] >= 'W') {
                s[i] += 4 - 26;
            } else s[i] += 4;
        }
    }
    cout << s << endl;
    return 0;
}