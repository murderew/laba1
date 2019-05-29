#include <iostream>
#include "complex"
#include "math.h"
#include "pch.h"
#include "ñomplex.h"

using namespace std;


void Complex::summ(Complex c)
{
	re += c.re;
	im += c.im;
}
void Complex::diff(Complex c)
{
	re -= c.re;
	im -= c.im;
}
void Complex::mult(Complex c)
{
	r = re;
	re = re * c.re - im * c.im;
	im = r * c.im + im * c.re;
}
void Complex::divide(Complex c)
{
	r = re;
	re = (re * c.re + im * c.im) / (c.re * c.re + c.im * c.im);
	im = (im * c.re - r * c.im) / (c.re * c.re + c.im * c.im);
}
void Complex::print()
{
	cout << re << "+" << im << "i";
}