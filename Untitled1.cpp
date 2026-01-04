

#include<iostream>
#include<cstdlib>
using namespace std;

#define print(x) cout << x << endl;

void _inputArray(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Enter Gross of Person " << i + 1 << ": ";
		cin >> arr[i];
	}
}

void _calculateComm(double arr[], double comm[], int size) {
	for (int i = 0; i < size; i++) {
		comm[i] = (arr[i] * 0.09) + 200;
	}
}

void _showArray(const double arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void _commFrequency(double comm[], double F[], int size) {
	int _count;
	for (int i = 0; i < size; i++) {
		_count = 0;
		if (F[i] != NULL) {
			for (int j = 0; j < size; j++) {
				if (/*comm[i] == comm[j] || */ comm[i] <= (comm[j] + 99)) {
					_count++;
					F[j] = NULL;
				}
			}
		}
		cout << "$" << comm[i] << "\t" << _count <<endl ;
	}
}
int main() {

	int n;
	n = 10;

	double arrA[n];
	double comm[n];
	double F[n];

	_inputArray(arrA, n);
	_calculateComm(arrA, comm, n);
	cout << "Elements of Commision Array: [";
	_showArray(comm, n);
	print(" ]\n\n\n");

	_commFrequency(comm, F, n);

	return 0;

}
