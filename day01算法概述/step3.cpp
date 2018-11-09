#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int main() {///O(sqrt(n))
    ifstream cin("data1.in");
    ofstream cout("data1.out");
    int n;
    cin >> n;
    int m = 2 * n;
    for (int k = sqrt(m); k >= 1; k--) {
        if (m % k)continue;
        int p = k, q = m / k; //q>p
        //i+j==q && j-i+1==p
        int j = (p + q - 1) / 2;
        int i = (q - p + 1) / 2;
        if (j > i && i + j == q && j - i + 1 == p) {
            cout << i << " " << j << endl;
        }
    }
    return 0;
}
