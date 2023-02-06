//program for computing boolean matrix operations
#include<iostream>
using namespace std;
int main(){
	int i, j, k, n;
	bool A[100][100], B[100][100], join[100][100], meet[100][100], product[100][100];
	//size of square matrices A and B
	cout << "Enter the size of square matrices: ";
	cin >> n;
	//input the elements for matrix A
	cout << "Enter the elements of first matrix: \n";
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> A[i][j];
		}
	}
	//input the elements for matrix B
	cout << "Enter the elements of second matrix: \n";
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> B[i][j];
		}
	}
	//join operation
	cout << "Join Operation: \n";
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			join[i][j]=A[i][j] | B[i][j];
			cout << join[i][j] << "\t";
		}
		cout << "\n";
	}
	//meet operation
	cout << "Meet Operation: \n";
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			meet[i][j]=A[i][j] & B[i][j];
			cout << meet[i][j] << "\t";
		}
		cout << "\n";
	}
	//boolean product
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			bool temp = 0;
			for(k = 0; k < n; k++){
				temp |= A[i][k] & B[k][j];
			}
			product[i][j] = temp;
		}
	}
	//displaying boolean product
	cout << "Boolean Product: \n";
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cout << product[i][j] << "\t";
		}
		cout << "\n";
	}
	return 0;
}
