#include <iostream>
using namespace std;

int mainEx0103Swap()
{
	{
		// 8 4 2 8 3
		// TODO: ???
		
		// 8 3 2 5 1 1 2 5 8 9
		// TODO: ???
		
		// 100개라면?
		
	}
	
	// 가장 작은 수 찾기
	{
		int arr[]{ 8, 3, 2, 5, 1, 1, 2, 5, 8 ,9 };
		const int size = sizeof(arr) / sizeof(arr[0]);
		int min = 99999999;
		
		for (int i{ 0 }; i < size - 1; i++) {
			min = min > arr[i] ? arr[i] : min;
			
		}

	
		cout << "Minimum Value: " << min << endl;
		
	}

	// 가장 작은 수의 인덱스 찾기
	{
		int arr[]{ 8, 3, 2, 5, 1, 1, 2, 5, 8, 9 };
		int size = sizeof(arr) / sizeof(arr[0]);
		int min = 9999999;
		int index = 0;
		for (int i = 0; i < size - 1; i++) {
			if (min > arr[i]) {
				min = arr[i];
				index = i;
			}
		}

		cout << "Minimum Value of Index: " << index << endl;
	}

	 // Selection Sort
	// 힌트: swap()
	{
		// 8 3 2 5
		//

		int arr[]{ 8, 3, 2, 5, 1, 1, 2, 5, 8, 9 };
		const int size = sizeof(arr) / sizeof(arr[0]);
		int minIndex;
		for (int i{ 0 }; i < size - 1; i++) {
			minIndex = i;
			
			for (int j{ i + 1 }; j < size - 1; j++) {
				if (arr[i] > arr[j]) {
					int temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
			
		}
		for (const auto& value : arr) {
			cout << value << " ";
		}
		cout << endl;
	}

	return 0;
}