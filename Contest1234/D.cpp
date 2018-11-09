//
// Created by liuhuan on 18-11-7.
//
#include <bits/stdc++.h>

using namespace std;
#define LL long long int
#define INF 0x3f3f3f3f
int dp[20020];

int main() {
    int n, m;
    cin >> n;
    int coins[n];  //硬币个数
    int T[n];      //硬币面值
    for (int i = 0; i < n; i++)
        cin >> T[i] >> coins[i];
    cin >> m;
    for (int i = 1; i <= m; i++) dp[i] = INF;    //赋极大值,表示不可达
    for (int i = 0; i < n; i++)    //遍历硬币种类
        for (int j = 1; j <= coins[i]; j++)    //遍历硬币数量
            for (int k = m; k >= T[i]; k--)  //此处较难理解
                //只能是由m到T[i]而不能相反
                //试想,初始态dp[k-T[i]]应当=INF,dp[0]=0
                //如果能组成m元的硬币,那么应当存在一条0->m的路径,此时
                //dp[m]就是需要的硬币数量
                //否则,dp[m]将不能链接到dp[0],从而dp[m]=INF输出-1
                dp[k] = min(dp[k], dp[k - T[i]] + 1);

    cout << (dp[m] < m ? dp[m] : -1) << endl;
    return 0;
}
