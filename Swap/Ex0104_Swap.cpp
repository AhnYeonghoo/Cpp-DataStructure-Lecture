#include <iostream>
#include <fstream>
using namespace std;

struct Element
{
	int key;
	char value;
};

bool CheckSorted2(int* arr, int size)
{
	// TODO: 정렬 확인 함수 구현
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) return false;
	}
	return true;
}

void Print2(int* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	// 비교 횟수 세보기, 더 효율적인 방법은 없을까?
	{
		ofstream ofile("log.txt");
		for (int size = 1; size < 1000; size++) {
			int count = 0;
			int* arr = new int[size];

			for (int s = 0; s < size; s++) {
				arr[s] = size - s;
			}

			int minIndex;
			
			for (int i = 0; i < size - 1; i++) {
				minIndex = i;
				for (int j = i + 1; j < size; j++) {
					count++;
					if (arr[j] < arr[minIndex]) {
						minIndex = j;
					}
				}
					std::swap(arr[i], arr[minIndex]);
			}
				ofile << size << " , " << count << endl;
				delete[] arr;
		}
			ofile.close();
	}

	// 안정성 확인(unstable)
	{
		Element arr[] = { {2, 'a'}, {2, 'b'}, {1, 'c'} };
		int size = sizeof(arr) / sizeof(arr[0]);
		
		for (const auto& value : arr) {
			cout << value.key << ", " << value.value << endl;
		}

		int minIndex;
		
		for (int i = 0; i < size - 1; i++) {
			minIndex = i;
			for (int j = i + 1; j < size; j++) {
				if (arr[j].key < arr[minIndex].key) {
					minIndex = j;
				}
			}
			std::swap(arr[i], arr[minIndex]);
		}
		for (const auto& value : arr) {
			cout << value.key << ", " << value.value << endl;
		}

		cout << endl;

	}
	return 0;
}