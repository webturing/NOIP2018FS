#include<bits/stdc++.h>

using namespace std;

int main() {
    vector <vector<int>> v(3, vector<int>(4, 0));
    for (int i = 0; i < 3; i++)for (int j = 0; j < 4; j++)cin >> v[i][j];
    int Max = v[0][0], r = 0, c = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++) {
            if (v[i][j] > Max) {
                Max = v[i][j], r = i, c = j;
            }
        }
    cout << Max << " " << r << " " << c << endl;
    return 0;
}