
#include "Header.h"
#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int n = 0; 
	cout << "Введите кол-во чисел : " << endl;
	cin >> n;

	int* arrayint = new int;
	arrayint = createArray(arrayint, n);
	printIntArray(arrayint, n);

	double* arraydouble = new double;
	arraydouble = createArray(arraydouble, n);
	printDoubleArray(arraydouble, n);

	Complex* arraycomplex = new Complex;
	arraycomplex = createArray(arraycomplex, n);
	printComplexArray(arraycomplex, n);

	cout << "\n\n";

	printIntArray(sortBubble(arrayint, n), n);
	printDoubleArray(sortBubble(arraydouble, n), n);
	printComplexArray(sortBubble(arraycomplex, n), n);

	cout << "\n\n";

}
