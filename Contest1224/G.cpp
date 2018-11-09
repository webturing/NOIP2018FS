#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long s = 0, t = 1;
    for (int i = 1; i <= n; i++) {
        t *= i;
        s += t;
    }
    cout << s << endl;
    return 0;
}