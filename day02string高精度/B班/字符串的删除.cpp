#include<bits/stdc++.h>

using namespace std;

int main() {
	string s = "I like C++";
	
	//s.erase(0,7); ���"C++" 
	
//	s.erase(7); //���"I like " 
	
	//s.erase(s.begin(), s.begin()+2);//���"like C++"
	
//	s.erase(s.begin()+7);//���"I like ++"��
	 //s.find('k')����k��������Ҳ����4 
	 s.erase(s.begin() + s.find('k'));
	cout << s<< endl;
	return 0;
}
