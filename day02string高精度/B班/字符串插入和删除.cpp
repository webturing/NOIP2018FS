#include<bits/stdc++.h>

using namespace std;

int main() {
	string s = "hello ";
	
	//��β��׷�� 
	s.push_back('z'); 
	s.push_back('j');
	
	s.insert(0,5,'~');//��λ�� index ���� count ���ַ� ch �ĸ�����
	
	s.insert(5," ^_^ "); //��λ�� index ���� s ��ָ��Ŀ���ֹ�ַ������ַ����ĳ������׸����ַ�ȷ��
	
	s.insert(8, "1234567890", 6);//��λ�� index �������� s ��ָ���ַ������� count ���ַ��� s �ܺ��п��ַ���
	
	s.insert(0,">_<");// ��λ�� index ���� string str 
	
	s.insert(s.begin(), 't');//�� pos ��ָ����ַ�ǰ�����ַ� ch ��
	
	string s1 = "hahahaha~"; 
	s.insert(s.end(), s1.begin(), s1.end());
	cout << s<< endl;
	return 0;
}
