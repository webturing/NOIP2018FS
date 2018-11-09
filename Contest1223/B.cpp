#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<double> S;
    string x;
    while (cin >> x) {
        istringstream iss(x);
        double r;
        if (iss >> r) {
            S.push(r);
        } else {
            double second = S.top();
            S.pop();
            double first = S.top();
            S.pop();
            double res = first;
            if (x[0] == '+') {
                res += second;
            } else if (x[0] == '-') {
                res -= second;
            } else if (x[0] == '*') {
                res *= second;
            } else {
                res /= second;
            }
            S.push(res);
        }
    }
    cout << fixed << setprecision(2) << S.top() << endl;
    return 0;
}