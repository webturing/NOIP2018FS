#include<bits/stdc++.h>

using namespace std;
const int MOD = 50000;

int main() {
    int n;
    cin >> n;
    vector<int> p(1, 2);
    p.push_back(3);
    for (int i = 5; p.size() < n; i += 2) {
        bool flag = true;
        for (int j = 0; p[j] * p[j] <= i && j < p.size(); j++) {
            if (i % p[j] == 0) {
                flag = false;
                break;
            }
        }
        if (flag)p.push_back(i);
    }
    long long s = 1;
    for (int i = 0; i < n; i++)s = (s * p[i]) % MOD;
    cout << s << endl;
    return 0;
}
