#include<bits/stdc++.h>

using namespace std;

int main() {
	string s = "hello ";
	
	//从尾部追加 
	s.push_back('z'); 
	s.push_back('j');
	
	s.insert(0,5,'~');//在位置 index 插入 count 个字符 ch 的副本。
	
	s.insert(5," ^_^ "); //在位置 index 插入 s 所指向的空终止字符串。字符串的长度以首个空字符确定
	
	s.insert(8, "1234567890", 6);//在位置 index 插入来自 s 所指向字符串的首 count 个字符。 s 能含有空字符。
	
	s.insert(0,">_<");// 在位置 index 插入 string str 
	
	s.insert(s.begin(), 't');//在 pos 所指向的字符前插入字符 ch 。
	
	string s1 = "hahahaha~"; 
	s.insert(s.end(), s1.begin(), s1.end());
	cout << s<< endl;
	return 0;
}
