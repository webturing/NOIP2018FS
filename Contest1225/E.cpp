#include<bits/stdc++.h>

using namespace std;

int main() {
    int a[21];
    a[1] = 1;
    a[2] = 1;
    cout << a[1] << endl;
    cout << a[2] << endl;
    for (int i = 3; i <= 20; i++) {
        a[i] = a[i - 1] + a[i - 2];
        cout << a[i] << endl;
    }
    return 0;
}