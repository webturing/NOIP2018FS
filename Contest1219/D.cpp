#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> freq;
    for (int i = 1; i <= n; i++)
        for (int t = i; t; t /= 10)
            freq[t % 10]++;
    for (int i = 0; i < 10; i++)
        cout << freq[i] << endl;
    return 0;
}