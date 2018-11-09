#include<bits/stdc++.h>

using namespace std;

bool f(int n) {
    int a = n / 100;
    int b = n % 100 / 10;
    int c = n % 10;
    if (a * a * a + b * b * b + c * c * c == n)return true;
    else return false;
}

int main() {
    for (int i = 100; i <= 999; i++) {
        if (f(i)) {
            cout << i << endl;
        }
    }
    return 0;
}