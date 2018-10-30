#include<bits/stdc++.h>

using namespace std;

int main() {
	string s = "I like C++";
	
	//s.erase(0,7); 输出"C++" 
	
//	s.erase(7); //输出"I like " 
	
	//s.erase(s.begin(), s.begin()+2);//输出"like C++"
	
//	s.erase(s.begin()+7);//输出"I like ++"；
	 //s.find('k')返回k的索引，也就是4 
	 s.erase(s.begin() + s.find('k'));
	cout << s<< endl;
	return 0;
}
