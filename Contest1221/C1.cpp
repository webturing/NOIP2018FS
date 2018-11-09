#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v(10);
    for (size_t i = 0; i < v.size(); i++)cin >> v[i];
    int k;
    cin >> k;
    vector<int>::iterator it = find(v.begin(), v.end(), k);
    if (it == v.end()) {
        cout << "Not exist!" << endl;
    } else {
        cout << it - v.begin() << endl;
    }
    return 0;
}