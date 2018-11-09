#include<bits/stdc++.h>

using namespace std;
const int N = 1000000 + 10;
vector<int> v(1, 2);

void init() {
    for (int i = 3; i <= N; i += 2) {
        bool flag = true;
        for (int j = 3; j * j <= i; j += 2) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag)v.push_back(i);
    }
}

int main() {
    init();
    int n;
    while (cin >> n) {
        int p = n / 2;
        if (p % 2 == 0)p--;
        for (int i = p; i >= 3; i -= 2) {
            if (binary_search(v.begin(), v.end(), i) && binary_search(v.begin(), v.end(), n - i)) {
                cout << i << " " << n - i << endl;
                break;
            }
        }
    }
    return 0;
}