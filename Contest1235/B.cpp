#include <bits/stdc++.h>

using namespace std;

int main() {
    string GRADE = "ABCDE";
    map<char, vector<int> > M;
    int n;
    cin >> n;
    for (int t; n-- && cin >> t;) {
        if (t < 60)M['E'].push_back(t);
        else if (t < 70)M['D'].push_back(t);
        else if (t < 80)M['C'].push_back(t);
        else if (t < 90)M['B'].push_back(t);
        else M['A'].push_back(t);
    }
    char m = 'A';
    for (char r = 'A'; r <= 'E'; ++r) {
        cout << M[r].size() << " ";
        if (M[r].size() > M[m].size())m = r;
    }
    cout << endl;
    cout << M[m].size() << endl;
    sort(M[m].begin(), M[m].end(), greater<int>());
    for (int i = 0; i < M[m].size(); i++)cout << M[m][i] << " ";
    cout << endl;
    return 0;
}
