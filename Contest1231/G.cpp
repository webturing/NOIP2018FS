#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 1;
    int two = 0, five = 0;
    for (int i = 2; i <= n; i++) {
        int j = i;
        while (j % 2 == 0)j /= 2, ++two;
        while (j % 5 == 0)j /= 5, ++five;
        s = (s * j) % 10;
    }
    two -= five;
    while (two--)s = (s * 2) % 10;
    cout << s << endl;
    return 0;
}