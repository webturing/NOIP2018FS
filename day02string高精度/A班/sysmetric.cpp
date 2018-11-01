#include<bits/stdc++.h>
using namespace std;
bool check1(const string&str){
	for(int i=0;i<str.size()/2;i++){
		if(str[i]!=str[str.size()-1-i])
			return false;
	}
	return true;	
}
bool check2(const string&str){
	string str2(str);
	reverse(str2.begin(),str2.end());
	return str2==str;	
}
bool check3(const string&str){
	string str2(str.rbegin(),str.rend());
	return str2==str;	
}
int main()
{
	string str;
	cin>>str;
	cout<<check1(str)<<endl;
	cout<<check2(str)<<endl;
	cout<<check3(str)<<endl;
	return 0;
}
