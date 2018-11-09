#include<bits/stdc++.h>

using namespace std;

int main() {
    string str = "abcdefghijklmn";
    string str2 = "ghi";
    size_t pos = str.find(str2);
    cout << pos << endl;
    str2 = "xyz";
    cout << (str.find(str2) == str.npos) << endl;
    return 0;
}
