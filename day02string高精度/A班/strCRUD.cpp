#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str="abcdefghijklmn";
	cout<<str<<endl;
	str+="opq";
	cout<<str<<endl;
	str.push_back('r');
	//del a
	str.erase(str.begin());
	cout<<str<<endl;
	str.erase(str.begin(),str.begin()+3);
	cout<<str<<endl;
	str.erase(str.end()-3,str.end());
	cout<<str<<endl;
	string str3="ghi";
	size_t pos=str.find(str3);
	if(pos==string::npos){
		cout<<"NOT FOUND STR3"<<endl;
	}else{
		str.erase(str.begin()+pos,str.begin()+pos+str3.size());
		cout<<"DELETE SUCCESSFULLY!"<<endl;
		cout<<str<<endl;
		str.insert(str.begin()+pos,'x');
		cout<<str<<endl;
	}
	return 0;
}
