#include<bits/stdc++.h>

using namespace std;

int main() {
    string a = "123 456 +";
    istringstream iss(a);
    double x;
    iss >> x;
    cout << x << endl;
    double y;
    iss >> y;
    cout << y << endl;
    string op;
    iss >> op;
    cout << op << endl;
    return 0;
}
