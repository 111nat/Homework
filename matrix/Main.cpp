#include "Matrix.h"
int main() {
	Matrix a = Matrix();
	Matrix b = Matrix();
	Matrix c = Matrix();
	a.ch();
	b.ch();
	c = a + b;
	c.print();
	c = a * b;
	c.print();
	c = a * 3;
	c.print();
	system("pause");
	return 0;
}