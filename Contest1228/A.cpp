#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, n, sum = 0;
    cin >> a >> n;
    int c = a;
    for (int i = 1; i <= n; i++) {
        sum += a;
        a = a * 10 + c;
    }
    cout << sum << endl;
    return 0;
}
 