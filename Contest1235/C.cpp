#include<bits/stdc++.h>

using namespace std;

int main() {
    map<string, int> M;
    for (string str; cin >> str;)M[str]++;
    cout << M.size() << endl;

    return 0;
}
