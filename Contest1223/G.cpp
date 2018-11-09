#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    while (cin >> hex >> a >> b) {//hex oct dec
        cout << setiosflags(ios::uppercase) << hex << a + b << endl;
    }
    return 0;
}