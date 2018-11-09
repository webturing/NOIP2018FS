#include<bits/stdc++.h>

using namespace std;

bool prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)return false;
    }
    return true;
}

int main() {
    for (int i = 100; i <= 200; i++) {
        if (prime(i)) {
            cout << i << endl;
        }
    }
}