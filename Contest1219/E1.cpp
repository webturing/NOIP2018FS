#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)cin >> v[i];
    sort(v.begin(), v.end());
    cout << v[0];
    int recent = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] != recent) {
            cout << " " << v[i];
            recent = v[i];
        }
    }
    cout << endl;
    return 0;
}