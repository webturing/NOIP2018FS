#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    vector <queue<int>> S(n);
    while (q--) {
        int op, t;
        cin >> op >> t;
        if (op == 0) {
            int x;
            cin >> x;
            S[t].push(x);
        } else if (op == 1) {
            if (S[t].size()) cout << S[t].front() << endl;
        } else if (op == 2) {
            if (S[t].size()) S[t].pop();
        }
    }

    return 0;
}