#include <bits/stdc++.h>
using namespace std;
void matRead(int arr[10][10], int, int);
void matPrint(int arr[10][10], int, int);
int main(){
	int r, c, array[10][10];
	cin >> r >> c;
	matRead(array, r, c);
	matPrint(array, r, c);
	return 0;
}
void matRead(int arr[10][10], int r, int c){
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			cin >> arr[i][j];
		}
	}
}
void matPrint(int arr[10][10], int r, int c){
	for(int i = 0; i < r; ++i){
		for(int j = 0; j < c; ++j){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

