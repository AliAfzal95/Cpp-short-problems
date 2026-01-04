

#include<iostream>
using namespace std;
#define maxSize 100


void _inputArray(int arr[], int n) {
	int i(0);
	do {
		cin >> arr[i];
	} while (++i < n);
}

void _digitFrequency(int arr[], int F[], int n) {
	int count;
	for (int i = 0; i != n; i++) {
		count = (0);
		if (F[i] != NULL) {
			for (int j = 0; j < n; j++) {
				if (arr[i] == arr[j]) {
					count++;
					F[j] = NULL;
				}
			}
		}
		if (count >= 1) {
			cout << "Element " << arr[i] << ": appears " << count << " times " << endl;
		}
	}
}


int main() {
	int size;
	int arr[maxSize];
	int F[maxSize];
	
	cout << "How many elements do you want to input in an Array: ";
	cin >> size;
	cout << "Enter " << size << " elements in the Array: ";
	
	_inputArray(arr, size);
	cout << endl;
	_digitFrequency(arr, F, size);
	
	return 0;
}