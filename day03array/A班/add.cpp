#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a;
	a.push_back(1);		a.push_back(3);		a.push_back(9);	
	vector<int> b;//b=4321
	b.push_back(1);b.push_back(2);b.push_back(3);b.push_back(4);
	if(a.size()<b.size())
	swap(a,b);
	a.push_back(0);
	b.resize(a.size());
	vector<int> c(a.size(),0);
	
	int sc=0;
	for(int i=0;i<a.size();i++){
		c[i]=a[i]+b[i]+sc;
		sc=c[i]/10;
		c[i]%=10;
	}
	if(c[c.size()-1]==0)c.erase(c.end()-1);
	copy(c.rbegin(),c.rend(),ostream_iterator<int>(cout,""));
	cout<<endl;
	
	return 0;
} 
