#include<bits/stdc++.h>

using namespace std;

int main() {
    string a = "123 456 + 456 789 * /";
    istringstream iss(a);
    string t;
    while (iss >> t) {
        double x;
        istringstream iss2(t);
        if (iss2 >> x) {
            cout << x << endl;
        } else {
            cout << t << " is an operator" << endl;
        }
    }
    return 0;
}
