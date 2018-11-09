#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        list<int> L;
        for (int i = 1; i <= n; i++) L.push_back(i);
        list<int>::iterator it = L.begin();
        while (L.size() > 1) {
            for (int k = 1; k < m; k++) {
                ++it;
                if (it == L.end()) it = L.begin();
            }
            it = L.erase(it);
            if (it == L.end()) it = L.begin();
        }
        cout << *L.begin() << endl;
    }
    return 0;
}