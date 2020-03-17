#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
class Matrix{
public:
	double* arr=new double[9];
	
	friend Matrix operator+(Matrix const& a, Matrix const& b);
	friend Matrix operator*(Matrix const& a, Matrix const& b);
	friend Matrix operator*(Matrix const& a, int const& b);
	void print();
	void ch();
};

