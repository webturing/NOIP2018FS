#include<bits/stdc++.h>

using namespace std;


int main() {
    for (int a, b, n; cin >> a >> b >> n;) {
        if (a == 0 && b == 0 && n == 0)break;
        a %= 7, b %= 7;
        int v[200] = {0, 1, 1};
        for (int i = 3; i < 200; i++) {
            v[i] = (v[i - 1] * a + v[i - 2] * b) % 7;
        }

        int left, right, period;
        for (int i = 1; i < 99; i++) {
            int x = v[i], y = v[i + 1];
            for (int k = i + 2; k < 99; k++) {
                if (v[k] == x && v[k + 1] == y) {
                    left = i;
                    right = k;
                    period = right - left;
                    break;
                }
            }
        }
        // copy(v,v+200,ostream_iterator<int>(cout,""));cout<<endl;
        //cout<<"left="<<left<<",period="<<period<<endl;
        n = n % period + period;
        cout << v[n] << endl;
    }
    return 0;
}
//
// Created by Administrator on 2018-11-05.
//

