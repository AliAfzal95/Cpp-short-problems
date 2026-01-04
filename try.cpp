#include<iostream>
using namespace std;


//function to take array input
void _inputArray(int arr[], int size) {
	int i = 0;
	do {
		cin >> arr[i];
	} while (++i < size);
}

//function to sort array
void _bubbleSort(int arr[], int size) {
	for (int i = 0; i < size ; i++) {
		for (int j = size - 1; j >= 0; j--) {
			if (arr[j-1] < arr[j])
				swap(arr[j], arr[j - 1]);
		}
	}
}

//function for console output of array elements
void _showArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

//function to add two arrays and store the result in a third array
void _addArrays(const int arrA[], const int arrB[], int arrC[], int size) {
	for (int i = 0; i < size; i++) {
		arrC[i] = arrA[i] + arrB[i];
	}
}
int main() {

	//var for array size
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;

	//Declaring two arrays of size n
	int arrA[n], arrB[n];

	cout << endl << "Input " << n << " elements in First Array: ";
	_inputArray(arrA, n);
	cout << endl << "Input " << n << " elements in Second Array: ";
	_inputArray(arrB, n);

	//Declaring a third array for storing the result of addition of corresponding elements of arrA and aarB
	int arrC[n];
	_addArrays(arrA, arrB, arrC, n);
	_bubbleSort(arrC, n);

	cout << endl << endl
		<< "Elements of First Array: ";
	_showArray(arrA, n);

	cout << endl << endl
		<< "Elements of Second Array: ";
	_showArray(arrB, n);

	cout << endl << endl
		<< "Result of addition of first two Arrays: ";
	_showArray(arrC, n);

	cout << endl << endl;

	return 0;
}
