#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i]))a++;
        else if (isspace(s[i]))b++;
        else if (isdigit(s[i]))c++;
        else d++;
    }
    cout << "characters=" << a << endl;
    cout << "spaces=" << b << endl;
    cout << "numbers=" << c << endl;
    cout << "others=" << d << endl;
    return 0;
}