#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int e = a * d + b * c, f = b * d;
        int g = __gcd(e, f);
        e /= g, f /= g;
        cout << e << " " << f << endl;
    }
    return 0;
}