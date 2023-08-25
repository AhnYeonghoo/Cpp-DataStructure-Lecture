#include <iostream>

using namespace std;


void mySwapPtr(int* i, int* j)
{
	int temp = *i;
	*i = *j;
	*j = temp;
}

void swap(int& numberA, int& numberB)
{
	int temp = numberA;
	numberA = numberB;
	numberB = temp;
}

void sorting(int i, int j)
{
	return;
}

bool checkSorted(int n, int m)
{
	return (n <= m);
}

int mainEx0101_Swap()
{
	// Swap
	{
		int a = 3;
		int b = 2;

		cout << a << " " << b << endl;

		// TODO:
		int temp = 0;
		temp = a;
		a = b;
		b = temp;

		cout << a << " " << b << endl;
	}

	// using Function
	{
		int a = 3;
		int b = 2;
		cout << a << " " << b << endl;
		swap(a, b);
		cout << a << " " << b << endl;
	}

	// using ptr Function
	{
		int a = 3;
		int b = 2;
		cout << a << " " << b << endl;
		mySwapPtr(&a, &b);
		cout << a << " " << b << endl;
	}

	// Sorting
	{
		int arr[]{ 3, 2 };
		cout << arr[0] << " " << arr[1] << endl;

		// TODO:
		int arr2[2];
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				arr2[0] = i;
				arr2[1] = j;

				cout << boolalpha;
				cout << arr2[0] << " " << arr2[1] << " "
					<< checkSorted(arr2[0], arr2[1]) << endl;
			}
		}
		cout << arr[0] << " " << arr[1] << endl;
	}

	// std::swap ÇÔ¼ö
	{
		cout << endl << endl;
		int arr[2];
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				arr[0] = i;
				arr[1] = j;
				
				if (arr[0] > arr[1]) {
					std::swap(arr[0], arr[1]);
				}

				cout << boolalpha;
				cout << arr[0] << " " << arr[1] << " "
					<< checkSorted(arr[0], arr[1]) << "\n";
			}
		}
	}
	return 0;
}