#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)cin >> v[i];
    sort(v.begin(), v.end());
    vector<int>::iterator p = unique(v.begin(), v.end());
    for (vector<int>::iterator it = v.begin(); it != p; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}