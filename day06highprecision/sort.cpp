#include<bits/stdc++.h>

using namespace std;

int hash(int n) {
    return n < 10 ? n : hash(n / 10) + (n % 10);
}

bool cmp(int a, int b) {
    int ha = hash(a);
    int hb = hash(b);
    if (ha - hb)return ha < hb;
    return a < b;
}

int main() {
    assert(hash(123) == 6);
    assert(hash(1000) == 1);
    int a[] = {11, 3, 5, 7, 9, 2, 4, 26, 8, 100,};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n, less<int>());
    copy(a, a + n, ostream_iterator<int>(cout, " "));
    cout << endl;
    sort(a, a + n, greater<int>());
    copy(a, a + n, ostream_iterator<int>(cout, " "));
    cout << endl;
    sort(a, a + n, cmp);
    copy(a, a + n, ostream_iterator<int>(cout, " "));
    cout << endl;
}
