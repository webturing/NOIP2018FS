#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.get();
    int Min = INT_MAX, Max = INT_MIN;
    map<int, int> M;
    string line;
    while (N--) {
        getline(cin, line);
        istringstream iss(line);
        for (int t; iss >> t;) {
            Max = max(Max, t);
            Min = min(Min, t);
            M[t]++;
        }
    }
    int cut, rund;//断号,重号
    for (int i = Min; i <= Max; i++) {
        if (M[i] == 0) {
            cut = i;
        }
        if (M[i] > 1) {
            rund = i;
        }
    }
    cout << cut << " " << rund << endl;
    return 0;
}
