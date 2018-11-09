#include<bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<int> q;
    cout << q.size() << endl;
    q.push(2);
    q.push(3);
    q.push(1);
    q.push(9999);
    while (q.size()) {
        cout << q.top() << endl;
        q.pop();
    }

    return 0;
}
