#include "Header.h"
Complex::Complex() {
	real = 0;
	imag = 0;
}

Complex::Complex(double r, double i) {
	real = r;
	imag = i;
}

double Complex::module() {
	return sqrt(this->imag * this->imag + this->real * this->real);
}


void Complex::printComplex() {
	if (imag > 0) {
		std::cout << real << '+' << imag << 'i' << std::endl;
	}
	else if (imag < 0) {
		std::cout << real << '-' << abs(imag) << 'i' << std::endl;
	}
	else {
		std::cout << real << std::endl;
	}
}

void Complex::set_imag(double im) {
	imag = im;
}

double Complex::get_imag() {
	return imag;
}

void Complex::set_real(double re) {
	real = re;
}

double Complex::get_real() {
	return real;
}



int* createArray(int* mas, int n) {
	mas = new int[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 100;
	}
	return mas;
}

double* createArray(double* mas, int n) {
	mas = new double[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 100;
	}
	return mas;
}

Complex* createArray(Complex* mas, int n) {
	mas = new Complex[n];
	for (int i = 0; i < n; i++) {
		mas[i].set_imag(rand() % 100);
		mas[i].set_real(rand() % 100);

	}
	return mas;
}

void printIntArray(int* mas, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << " ";
	}
	std::cout << "\n";
}

void printDoubleArray(double* mas, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << " ";
	}
	std::cout << "\n";
}

void printComplexArray(Complex* mas, int n) {
	for (int i = 0; i < n; i++) {
		mas[i].printComplex();
	}
	std::cout << "\n";
}


int* sortBubble(int* mas, int n) {
	int* buf = new int [n];
	for (int i = 0; i < n; i++) {
		buf[i] = mas[i];
	}
	int buffer;
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (buf[j] > buf[j + 1]) {
				buffer = buf[j];
				buf[j] = buf[j + 1];
				buf[j + 1] = buffer;
			}
		}
	}
	return buf;
}

double* sortBubble(double* mas, int n) {
	double* buf = new double[n];
	for (int i = 0; i < n; i++) {
		buf[i] = mas[i];
	}
	double buffer;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (buf[j] > buf[j + 1]) {
				buffer = buf[j];
				buf[j] = buf[j + 1];
				buf[j + 1] = buffer;
			}
		}
	}
	return buf;
}

Complex* sortBubble(Complex* mas, int n) {
	Complex* buf = new Complex[n];
	for (int i = 0; i < n; i++) {
		buf[i] = mas[i];
	}
	Complex buffer;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (buf[j].module() > buf[j + 1].module()) {
				buffer = buf[j];
				buf[j] = buf[j + 1];
				buf[j + 1] = buffer;
			}
		}
	}
	return buf;
}
