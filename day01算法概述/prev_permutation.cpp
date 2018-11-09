#include<bits/stdc++.h>

using namespace std;

int main() {
    //ofstream cout("test.out");
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    next_permutation(a, a + 9);
    copy(a, a + 9, ostream_iterator<int>(cout, ""));
    cout << endl;
    prev_permutation(a, a + 9);
    copy(a, a + 9, ostream_iterator<int>(cout, ""));
    cout << endl;
    return 0;
}
