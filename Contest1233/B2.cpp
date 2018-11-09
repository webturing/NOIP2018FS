#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int a[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        reverse(a + 1, a + n + 1);
        vector<int> v;//存储长度对应的值。v[i]表示长度为i+1的最大子序列的最后一个元素的最小值
        v.push_back(a[1]);//第一个数直接放进去
        for (int i = 2; i <= n; i++) {
            if (a[i] < *v.rbegin()) {
                auto pos = lower_bound(v.begin(), v.end(), a[i]);
                *pos = a[i];//替换成较小的数
            } else {
                v.push_back(a[i]);//长度增加
            }
        }
        cout << v.size() << endl;
    }
    return 0;
} 