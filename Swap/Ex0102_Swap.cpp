#include <iostream>
using namespace std;


bool CheckSorted(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		if ((arr[0] <= arr[1]) || (arr[1] <= arr[2])) {
			return true;
		}
		/*if (arr[1] <= arr[2]) {
			return true;
		}*/
		else return false;
			
	}
}

bool ChekcSortedSolution(int* arr, int size)
{
	// TODO: ���� Ȯ�� �Լ� ����
	for (int i{ 0 }; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			return false;
		}
	}
	return true;
}

void Print(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int mainEx0102Swap()
{
	// 3�� ����
	{
		for (int k = 0; k < 3; k++) {
			for (int j = 0; j < 3; j++) {
				for (int i = 0; i < 3; i++) {
					int arr[3]  { i, j, k };
					int size = sizeof(arr) / sizeof(arr[0]);

					for (int e = 0; e < size; e++) {
						cout << arr[e] << " " << flush;
					}

					cout << " -> " << flush;

					// TODO: ���� �غ���
					for (int n{ 0 }; n < size; n++) {
						if (arr[0] >= arr[1]) {
							std::swap(arr[0], arr[1]);
							}
						if (arr[1] >= arr[2]) {
							std::swap(arr[1], arr[2]);
						} 
					}

					for (int e = 0; e < size; e++) {
						cout << arr[e] << " " << flush;
					}

					cout << boolalpha;
					cout << CheckSorted(arr, size);
					cout << endl;
				}
			}
		}
	}

	return 0;
}