#include <iostream>
using namespace std;

void bubbleSort(int* arr, int size)
{
	for (int i{ 0 }; i < size - 1; i++) {
		bool swapped = false;
		for (int j{ 0 }; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
				swapped = true;
			}
			for (int k{ 0 }; k < size; k++) {
				cout << arr[k] << " ";
			}
			cout << endl;
			if (swapped == false) break;
		}
	}
}

void bubbleSortSolution(int* arr, int size)
{
	int i, j;
	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
			}
			for (int l{ 0 }; l < size; l++) {
				cout << arr[l] << " ";
			}
			cout << endl;
		}
	}
}

int mainEx0105Swap()
{
	int arr[]{ 5, 4, 3, 2, 1}; // worth case

	int arr2[]{ 1, 2, 3, 4, 5 }; // best case
	int n = sizeof(arr) / sizeof(arr[0]);

	

	bubbleSort(arr2, n);
	
	
	
	
	return 0;
}