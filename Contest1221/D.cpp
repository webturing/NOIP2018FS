#include<bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
        cout << 0 << endl;
    } else {
        bool flag = false;
        for (size_t i = 0; i < s1.size() && i < s2.size(); i++) {
            if (s1[i] != s2[i]) {
                flag = true;
                cout << s1[i] - s2[i] << endl;
                break;
            }
        }
        if (!flag) {
            if (s1.size() < s2.size())cout << -(int) s2[s1.size()] << endl;
            else cout << (int) s1[s2.size()] << endl;
        }
    }
    return 0;
}