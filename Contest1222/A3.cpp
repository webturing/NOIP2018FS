#include<bits/stdc++.h>

using namespace std;
const double PI(acos(-1.0));
typedef complex<double> C;

const int N = (1 << 17);
int ans[N];
C a[N], b[N];
char s[N], t[N];

void bit_reverse_swap(C *a, int n) {
    for (int i = 1, j = n >> 1, k; i < n - 1; ++i) {
        if (i < j) swap(a[i], a[j]);
        for (k = n >> 1; j >= k; j -= k, k >>= 1)  // inspect the highest "1"
            ;
        j += k;
    }
}

void FFT(C *a, int n, int t) {
    bit_reverse_swap(a, n);
    for (int i = 2; i <= n; i <<= 1) {
        C wi(cos(2.0 * t * PI / i), sin(2.0 * t * PI / i));
        for (int j = 0; j < n; j += i) {
            C w(1);
            for (int k = j, h = i >> 1; k < j + h; ++k) {
                C t = w * a[k + h], u = a[k];
                a[k] = u + t;
                a[k + h] = u - t;
                w *= wi;
            }
        }
    }
    if (t == -1) {
        for (int i = 0; i < n; ++i) {
            a[i] /= n;
        }
    }
}

int trans(int x) {
    return 1 << int(ceil(log(x) / log(2) - 1e-9));  // math.h/log() 以e为底
}

int main() {
    int n, m, l;
    for (; ~scanf("%s%s", s, t);) {
        n = strlen(s);
        m = strlen(t);
        l = trans(n + m - 1);  // n次*m次不超过n+m-1次
        for (int i = 0; i < n; ++i) a[i] = C(s[n - 1 - i] - '0');
        for (int i = n; i < l; ++i) a[i] = C(0);
        for (int i = 0; i < m; ++i) b[i] = C(t[m - 1 - i] - '0');
        for (int i = m; i < l; ++i) b[i] = C(0);

        FFT(a, l, 1);  //把A和B换成点值表达
        FFT(b, l, 1);
        for (int i = 0; i < l; ++i)  //点值做乘法
            a[i] *= b[i];
        FFT(a, l, -1);  //逆DFT
        for (int i = 0; i < l; ++i) ans[i] = (int) (a[i].real() + 0.5);
        ans[l] = 0;  // error-prone :'l' -> '1'
        for (int i = 0; i < l; ++i) {
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
        }
        int p = l;
        for (; p && !ans[p]; --p);
        for (; ~p; putchar(ans[p--] + '0'));
        puts("");
    }
    return 0;
}