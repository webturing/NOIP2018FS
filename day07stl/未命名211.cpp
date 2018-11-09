#include<iostream>

using namespace std;

int main() {
    int n, k, i, j;
    float temp, a[2000];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];                //����n����
    for (i = 0; i < n; i++) {       //i���Ƶ�ǰ��������Сֵ��ŵ�����λ��
        k = i;
        for (j = i + 1; j < n; j++)  //�ڵ�ǰ������a[i..n]��ѡ��С��Ԫ��a[k]
            if (a[j] < a[k]) k = j;
        if (k != i) {             //����a[i]��a[k]������ǰ��Сֵ�ŵ�a[i]λ��
            temp = a[i];
            a[i] = a[k];
            a[k] = temp;
        }
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
