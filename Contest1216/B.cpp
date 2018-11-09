using namespace std;

#include<bits/stdc++.h>

int main() {
    vector<int> f(26, 0);
    char ch;
    while (cin >> ch) {
        if (ch == '#')
            break;
        if (isalpha(ch))
            f[tolower(ch) - 'a']++;
    }
    for (char c = 'a'; c <= 'z'; c++) {
        cout << c << " " << f[c - 'a'] << endl;
    }
    return 0;
}
