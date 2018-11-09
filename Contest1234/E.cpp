//
// Created by liuhuan on 18-11-7.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int n; cin >> n;) {
        vector<int> bombs(n);
        for (size_t i = 0; i < n; i++)cin >> bombs[i];
        vector<int> h(bombs.size(), 0);
        h[0] = 1;
        for (int i = 1; i < bombs.size(); i++) {
            int max = 0;
            for (int j = 0; j < i; j++)
                if (bombs[j] >= bombs[i] && h[j] > max)max = h[j];
            h[i] = max + 1;

        }
        cout << *max_element(h.begin(), h.end()) << endl;
    }
    return 0;
}