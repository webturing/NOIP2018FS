#include<bits/stdc++.h>
using namespace std;
int main(){
	double x=13/4.0;
	cout<<x<<endl;//自动格式
	cout<<fixed<<x<<endl;//保留6位
	cout<<fixed<<setprecision(0)<<x<<endl; 
	cout<<floor(x)<<endl;
	cout<<ceil(x)<<endl;
	return 0;
} 
