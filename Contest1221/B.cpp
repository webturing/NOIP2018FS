#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v(10);
    for (size_t i = 0; i < v.size(); i++)cin >> v[i];
    sort(v.begin(), v.end());
    for (size_t i = 0; i < v.size(); i++)cout << v[i] << endl;
    return 0;
}