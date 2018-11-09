#include<bits/stdc++.h>

using namespace std;
const int N = 101;
vector<bool> prime(N, true);

void fill() {
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= N; i++)
        if (prime[i])
            for (int j = i * i; j < N; j += i)
                prime[j] = false;
}

int main() {
    fill();
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
        if (prime[i])cout << i << endl;
    return 0;
}