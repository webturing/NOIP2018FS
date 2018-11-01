#include<bits/stdc++.h>

using namespace std;

int main() {
	string str = "I like the C++";
	str.replace(2,4,"love");
	str.replace(str.begin()+7, str.begin()+10,1,'A');
	cout << str << endl;
	return 0;
}
