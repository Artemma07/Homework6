#ifndef HEADER_H
#define HEADER_H
#include <iostream>

class Complex {
private:
	double real;
	double imag;
public:

	Complex();
	Complex(double r, double i);

	double module();
	void printComplex();

	void set_imag(double im);
	double get_imag();

	void set_real(double re);
	double get_real();
};

void printIntArray(int* mas, int n);
void printDoubleArray(double* mas, int n);
void printComplexArray(Complex* mas, int n);


int* createArray(int* mas, int n);
double* createArray(double* mas, int n);
Complex* createArray(Complex* mas, int n);

int* sortBubble(int* mas, int n);
double* sortBubble(double* mas, int n);
Complex* sortBubble(Complex* mas, int n);
#endif
