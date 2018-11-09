#include<bits/stdc++.h>

using namespace std;

int cmp(string a, string b) {
    string a1 = a.substr(6, 8);
    string b1 = b.substr(6, 8);
    if (a1 == b1)return a > b;
    else return a1 > b1;
}

int main() {
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
    return 0;
}