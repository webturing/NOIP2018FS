#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.get();
    string s;
    while (T--) {
        getline(cin, s);
        int n = s.size();
        for (int i = 0, left = 0, right = 0; i < n; i++) {
            for (left = i; left < n; ++left)if (s[left] != ' ')break;
            for (right = left; right < n; ++right)if (s[right] == ' ')break;
            reverse(s.begin() + left, s.begin() + right);
            i = right;
            left = right = i;
        }
        cout << s << endl;
    }
    return 0;
}
