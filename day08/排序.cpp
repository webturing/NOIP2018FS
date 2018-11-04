#include<bits/stdc++.h>
using namespace std;

int f(int n){
	int ret = 0;
	while(n){
		ret += n%10;
		n /= 10;
	}
	return ret;
}
bool cmp(const int& a,const int& b){
	return f(a) < f(b);
}

int main(){
	int a[] = {100,1,10,31,53,74,92,32,4,6,8,1000};
	int n = sizeof(a)/sizeof(a[0]);

	assert(n == 10);
	
	sort(a, a+n);
	copy(a,a+n,ostream_iterator<int>(cout," "));cout << endl;	

	sort(a, a+n, less<int>());
	copy(a,a+n,ostream_iterator<int>(cout," "));cout << endl;	

	sort(a, a+n, greater<int>());
	copy(a,a+n,ostream_iterator<int>(cout," "));cout << endl;	

	reverse(a, a+n);
	copy(a,a+n,ostream_iterator<int>(cout," "));cout << endl;	

	sort(a, a+n, cmp);
	copy(a,a+n,ostream_iterator<int>(cout," "));cout << endl;	
	

	return 0;
}
