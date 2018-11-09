#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> k;
    for (size_t i = 0; i < n; i++) {
        cin >> v[i];
        k.insert(v[i]);
    }
    sort(v.begin(), v.end());
    int best = 0, ans = 0;
    for (set<int>::iterator it = k.begin(); it != k.end(); ++it) {
        vector<int>::iterator left = lower_bound(v.begin(), v.end(), *it);
        vector<int>::iterator right = upper_bound(v.begin(), v.end(), *it);
        if (right - left > ans) {
            best = *it;
            ans = right - left;
        }
    }
    cout << best << endl << ans << endl;
    return 0;
}