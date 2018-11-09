#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0)break;
        vector<int> v(n);
        for (size_t i = 0; i < v.size(); i++)cin >> v[i];
        v.push_back(m);
        sort(v.begin(), v.end());
        for (size_t i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}