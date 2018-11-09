#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> M;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        M[v[i]]++;
    }
    int ans = 0, Max = 0;
    for (map<int, int>::iterator it = M.begin(); it != M.end(); ++it) {
        if (it->second > Max) {
            ans = it->first;
            Max = it->second;
        }
    }
    cout << ans << endl;
    cout << Max << endl;
    return 0;
}