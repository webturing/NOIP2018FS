#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while (cin >> s) {
        stack<char> S;
        size_t Max = 0;
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                S.push(s[i]);
                Max = max(Max, S.size());
            } else if (s[i] == ')') {
                S.pop();
            }
        }
        cout << Max << endl;
    }
    return 0;
}