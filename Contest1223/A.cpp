#include<bits/stdc++.h>

using namespace std;

int main() {
    double pi = 3.14159;//pi=atan(1.0)*4;
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        double Max = 0;//max min swap find
        double S = 0;
        while (N--) {
            string t;
            cin >> t;
            if (t == "T") {
                double a, h;
                cin >> a >> h;
                S = a * h / 2;
            } else if (t == "R") {
                double a, b;
                cin >> a >> b;
                S = a * b;
            } else if (t == "C") {
                double r;
                cin >> r;
                S = pi * r * r;
            }
            Max = max(Max, S);
        }
        cout << fixed << setprecision(2) << S << endl;
    }
    return 0;
}