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
    cin >> n;
    int tot = 0;
    for (int i = 0; i < v.size() - 1 && v[i + 1] <= n; i++) {
        if (v[i + 1] - v[i] <= 2) {
            ++tot;
        }
    }
    cout << tot << endl;
    return 0;
}