#include "Matrix.h"
void Matrix::print() {
	for (int i = 0; i < 9; i++) {
		if (i == 3 || i == 6) {
			cout<<endl;
		}
		cout << " "<<arr[i];
	}
	cout <<endl<< "end of print"<<endl;
}

Matrix operator+(Matrix const& a, Matrix const& b)
{
	Matrix result = Matrix();
	for (int i = 0; i < 9; i++) {
		result.arr[i] = a.arr[i] + b.arr[i];
	}
	return result;
}

Matrix operator*(Matrix const& a, Matrix const& b)
{
	Matrix result = Matrix();
	for (int l = 0; l < 3; l++) {
		for (int i = 0; i < 3; i++) {
			result.arr[i+(l*3)] = a.arr[0 + (l * 3)] * b.arr[i] + a.arr[1 + (l * 3)] * b.arr[i + 3] + a.arr[2 + (l * 3)] * b.arr[i + 6];
		}
	}

	


	return result;
}

Matrix operator*(Matrix const& a, int const& b) {
	Matrix result = Matrix();
	for (int i = 0; i < 9; i++) {
		result.arr[i] = a.arr[i] * b;
	}




	return result;
}

void Matrix::ch() {
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}
}