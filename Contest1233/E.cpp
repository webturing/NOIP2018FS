#include <bits/stdc++.h>

using namespace std;

struct A {
    int chinese, math, english, total;
    int number;

    bool operator<(const A &other) const {
        if (total != other.total)
            return total > other.total;
        if (chinese != other.chinese)
            return chinese > other.chinese;
        return number < other.number;
    }
};

int main() {
    ifstream cin("scholar.in");
    ofstream cout("scholar.out");
    int n;
    cin >> n;
    vector <A> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].chinese >> v[i].math >> v[i].english;
        v[i].total = v[i].chinese + v[i].math + v[i].english;
        v[i].number = i + 1;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 5 && i < v.size(); i++) {
        cout << v[i].number << " " << v[i].total << endl;
    }
    return 0;
}