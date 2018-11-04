#include<bits/stdc++.h>
using namespace std;
typedef double LL;
const int N = 65;
LL a[N+1][N+1];
void print(){
	for(int i = 0; i <= N; i++){
		for(int j = 0; j <= i; j ++)
		{
			cout<< setw(2) << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	
//	print();
	
	for(int i = 0; i <= N; i++){
		a[i][0] = a[i][i]=1; 
	}
	for(int i = 1; i <= N; i++){
		for(int j = 1; j < i; j++){
			a[i][j] = a[i-1][j-1]+a[i-1][j];
		}
	}
//	assert(a[N][N/2]<(1LL<<32));//int 35
	assert(a[N][N/2]<(1LL<<62));//long slong 65
//	print();
	return 0;
}
