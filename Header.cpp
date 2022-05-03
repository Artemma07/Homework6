#include "Header.h"
void bubbleSort(int arr1[], unsigned n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int b = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = b;
            }
        }
    }
}
void bubbleSort(float arr[], unsigned n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
            }
        }
    }
}
void print(int arr1[], unsigned n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
}

void print(float arr[], unsigned n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void random_numbers(int arr1[], unsigned n)
{
    srand((unsigned int)time(0));
    for (int i = 0; i < n; i++)
    {
        arr1[i] = rand() % 100 - 50;

    }
}
void random_numbers(float arr[], unsigned n)
{
    srand((unsigned int)time(0));
    for (int i = 0; i < n; i++)
    {
        arr[i] = (rand() % 100 - 50) * 0.5;
    }
}
void delete_memory(float* arr) {
    delete[]arr;
}
void delete_memory(int* arr1) {
    delete[]arr1;
}