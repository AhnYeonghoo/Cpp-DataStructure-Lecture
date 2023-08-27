#include <iostream>
using namespace std;

void InsertionSort(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[0] > arr[j + 1]) {
				int temp = arr[j + 1];
				arr[++j] = arr[j];
				arr[j + 1] = arr[j];
			}
		}
		for (int k = 0; k < size; k++) {
			cout << arr[k] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int arr[]{ 4, 3, 2,10, 12, 1, 5, 6 };
	int size = sizeof(arr) / sizeof(arr[0]);

	InsertionSort(arr, size);
	
	return 0;
}