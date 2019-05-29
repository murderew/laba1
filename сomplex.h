#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
struct Complex
{
	double re;
	double im;
	double r;
	void summ(Complex c);
	void diff(Complex c);
	void mult(Complex c);
	void divide(Complex c);
	void print();
};
#endif