using namespace std;

#include<bits/stdc++.h>

int main() {
    int CC[] = {1, 0, 0, 0, 0, 0, 1, 0, 2, 1,};
    string s;
    while (cin >> s) {
        int tot = 0;
        for (size_t i = 0; i < s.length(); i++)
            tot += CC[s[i] - '0'];
        cout << tot << endl;
    }
    return 0;
}
