#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

LL C(int n, int r){
	if(2*r > n){
		r = n - r;
	}
	LL ret = 1LL;
	for(int i = 0; i < r; i++){
		ret *= n - i;
		
	}
	for(int i = 2; i <= r; i++){
		ret /= i;
	}
	return ret;
}

int main(){
//	assert(120 == fact(5));
	assert(10 == C(5,3));
	int n = 28;	
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= i; j++){
			cout << C(i, j) << " ";
		}
		cout << endl;
	}
	return 0;
}
