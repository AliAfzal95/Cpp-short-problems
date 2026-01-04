#include <iostream>
using namespace std;
#define Max_Size 21

void cin_array(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
void cout_array(const int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void digit_frequency(const int arr[], int n, int F[])
{
	int b,zero=0,one=0,two=0,thr=0,four=0,five=0,six=0,sev=0,eig=0,nine=0;
	double a;
	for (int i = 0; i < n; i++)
	{
		b = arr[i];
		if (arr[i] == 0) { zero++; }
		while (b > 0)
		{
				a = b % 10;
				if (a == 0) { zero++; }
				if (a == 1) { one++; }
				if (a == 2) { two++; }
				if (a == 3) { thr++; }
				if (a == 4) { four++; }
				if (a == 5) { five++; }
				if (a == 6) { six++; }
				if (a == 7) { sev++; }
				if (a == 8) { eig++; }
				if (a == 9) { nine++; }
				b = b/10;
		}
	}
	F[0] = zero;
	F[1] = one;
	F[2] = two;
	F[3] = thr;
	F[4] = four;
	F[5] = five;
	F[6] = six;
	F[7] = sev;
	F[8] = eig;
	F[9] = nine;
	cout << "The Frequency of each digit in the given numbers is : \n";
	for (int i = 0; i < 10; i++)
	{
		cout <<i<<" : "<< F[i] << "\n";
	}
}
int main()
{
	int arr[Max_Size], F[10],n;
	cout << "Enter number of elements to be inputted the array\n";
	cin >> n;
	if (n > 21) { cout << "number of elemnets can not be more than 21"; }
	else
	{
		cout << "enter numbers \n";
		cin_array(arr, n);
		cout << "The numbers are : \n";
		cout_array(arr, n);
		cout << endl << endl;
		digit_frequency(arr, n, F);
	}
	return 0;
}
