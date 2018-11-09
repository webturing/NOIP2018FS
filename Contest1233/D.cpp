#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v = {1, 2, 4, 5, 10};
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i <= n; i++) {
        a[i] = i;
    }
    for (int i = 0; i < v.size(); i++) {
        a[v[i]] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < v.size(); j++) {
            if (v[j] > i)continue;
            a[i] = min(a[i], a[i - v[j]] + 1);
        }
    }
    cout << a[n] << endl;
} 