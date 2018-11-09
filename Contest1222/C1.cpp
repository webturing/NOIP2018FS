#include<bits/stdc++.h>

using namespace std;

int main() {
    double a, b;
    int c;
    while (cin >> a >> b >> c) {
        double d = a / b;
        cout << fixed << setprecision(c) << d << endl;
    }
    return 0;
}