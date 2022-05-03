
#include "Header.h"
using namespace std;
int main()
{
	setlocale(0, "Rus");
	unsigned n = 0;
	cout << "Введите количество чисел, которые будут сортироваться: ";
	cin >> n;
	if (!cin) {
		cout << "Вы ввели неправильное число!Попробуйте снова!";
	}
	float* arr = new float[n];
	int* arr1 = new int[n];
	random_numbers(arr1, n);
	random_numbers(arr, n);
	bubbleSort(arr, n);
	bubbleSort(arr1, n);
	print(arr1, n);
	print(arr, n);
	delete_memory(arr);
	delete_memory(arr1);


	return 0;
}
