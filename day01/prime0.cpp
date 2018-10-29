#include<bits/stdc++.h>
using namespace std;
bool prime(int n){///O(sqrt(n)/2)
	if(n==2)return true;
	if(n<2||n%2==0)return false;
	for(int c=3;c*c<=n;c+=2){
		if(n%c==0)return false;		
	}
	return true;
}
int main() {
	int n;
	cin>>n;
	if(prime(n)) {
		cout<<"Y";
	} else {
		cout<<"N";
	}
	return 0;
}
