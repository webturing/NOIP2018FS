#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int c = a * b;
    int r;
    while (b) {
        int r = b;
        b = a % b;
        a = r;
    }
    c /= a;
    cout << c << endl;
    return 0;
}