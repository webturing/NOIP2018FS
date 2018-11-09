#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    while (n--) {
        int t;
        cin >> t;
        s.insert(t);
    }
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
        cout << *it << endl;
    return 0;
}