#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int len = 0;
    while (n > 0) {
        n /= 10;
        ++len;
    }
    cout << len << endl;
    return 0;
}