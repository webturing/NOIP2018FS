#include <bits/stdc++.h>

using namespace std;


int main() {
    string s;
    while (getline(cin, s)) {
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}