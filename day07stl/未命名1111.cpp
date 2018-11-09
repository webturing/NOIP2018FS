#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int a = 0, b = 0;
    int n;
    cin >> n;
    int s[n + 1];
    for (int i = 1; i <= n; i++)cin >> s[i];
    sort(s + 1, s + n + 1, cmp);
    for (int i = 1; i <= n; i++) {
        if (a > b)swap(a, b);
        a += s[i];
    }
    if (a > b)swap(a, b);
    cout << b << endl;
    return 0;
}

