#include <bits/stdc++.h>

using namespace std;
map<char, int> M;

void fill() {
    M['H'] = 1;
    M['C'] = 12;
    M['N'] = 14;
    M['O'] = 16;
    M['F'] = 19;
    M['P'] = 31;
    M['S'] = 32;
    M['K'] = 39;
}

int main() {
    fill();
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        int tot = 0;
        for (size_t i = 0; i < str.length(); i++) {
            if (isalpha(str[i])) {
                if (i == str.length() - 1 || isalpha(str[i + 1])) {
                    tot += M[str[i]];
                } else {
                    tot += M[str[i]] * (str[i + 1] - '0');
                }
            }
        }
        cout << tot << endl;
    }
    return 0;
}