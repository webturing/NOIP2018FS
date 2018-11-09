#include<bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("data2.in");
    int n;
    cin >> n;
    vector<int> v(n);
    int Max = 0, Sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        Sum += v[i];
        Max = max(Max, v[i]);
    }
    int m;
    cin >> m;
    int left = Max, right = Sum, best = Sum;
    while (left <= right) {
        int Mid = (left + right) >> 1;
        int cur = 0, tot = 0;
        for (int i = 0; i < n; i++) {
            if (cur + v[i] > Mid) {
                tot++;
                cur = v[i];
            } else {
                cur += v[i];
            }
        }
        if (cur != 0)
            ++tot;
        if (tot <= m) {
            best = Mid;
            right = Mid - 1;
        } else {
            left = Mid + 1;
        }
    }
    cout << best << endl;
    return 0;
}