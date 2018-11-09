#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = {100, 50, 20, 10, 5, 2, 1};
    int n;
    while (cin >> n && n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            int t = 0;
            for (int j = 0; j < v.size(); j++) {
                while (x >= v[j]) {
                    x -= v[j];
                    t++;
                }
            }
            sum += t;
        }
        cout << sum << endl;
    }
    return 0;
} 