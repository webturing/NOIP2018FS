#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {///O(sqrt(n))
	
	int n;
	cin>>n;
	int m=2*n;
	for(int i=1;i*i<=m;i++){
		if(m%i)continue;
		int p=i,q=m/i; //q>p
		//i+j==q && j-i+1==p
		int j=(p+q-1)/2;
		int i=(q-p+1)/2;
		if(j>i&&i+j==q&&j-i+1==p){
			cout<<i<<" "<<j<<endl;
		}
	}
	return 0;
}
