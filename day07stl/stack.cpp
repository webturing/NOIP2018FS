#include<bits/stdc++.h>

using namespace std;

int main() {
    stack<int> S;
    S.push(0);
    S.push(1);
    S.push(2);
    cout << S.top() << endl;
    cout << S.size() << endl;
    S.pop();
    cout << S.top() << endl;
    cout << S.size() << endl;
    if (S.empty())cout << "Empty" << endl;
    while (S.size()) {
        cout << S.top() << endl;
        S.pop();

    }
    return 0;
}
