#include<bits/stdc++.h>
using namespace std;
int main(){
	int x=4007,y=931;
	ostringstream oss;
	oss<<x<<y;
	string t=oss.str();//"4007931";
	ostringstream oss2;
	oss2<<y<<x;
	string t2=oss2.str();//"9314007";
	cout<<t<<endl;
	cout<<t2<<endl;
	cout<<(t<t2)<<endl;
	istringstream iss(t+" "+t2);
	int m,n;
	iss>>m>>n;
	cout<<m<<endl;
	cout<<n<<endl; 
	cout<<(m<n)<<endl;
	
	return 0;
} 
