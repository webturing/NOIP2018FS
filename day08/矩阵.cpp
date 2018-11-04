#include<bits/stdc++.h>
using namespace std;


int main(){
	ifstream cin("input.txt");
	int n = 3;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	int sum = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				sum += a[i][j];
			}
		}
	}
	cout << sum << endl;
	
	sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i][n-i-1];
	}
	cout << sum << endl;
	
	int row = 0, column = 0;
	int max = a[row][column];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] > max){
				row = i;
				column = j;
				max = a[i][j];
			}
		}
	} 
	cout << "a["<< row << "][" << column<<"] : " << max << endl; 
	
	return 0;
}
