#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	int a[n+1][n+1];
	a[0][0] = 1;
	for(int i = 1; i <= n; i++){
		a[i][0] = a[i][i] = 1;
	} 
	for(int i = 1; i <= n; i++){
		for(int j = 1; j < i; j++){
			a[i][j] = a[i-1][j] + a[i-1][j-1];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i; j++){
			cout << a[i][j]<<" ";
		}
		cout << a[i][i]<<endl;
	}
	return 0;
}
