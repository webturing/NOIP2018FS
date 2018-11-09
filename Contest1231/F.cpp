#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v(60);
    v[0] = 0;
    v[1] = 1;
    for (int i = 2; i < v.size(); i++)v[i] = (v[i - 1] + v[i - 2]) % 10;

    long long n;
    while (cin >> n)
        cout << v[n % 60] << endl;
    return 0;
}