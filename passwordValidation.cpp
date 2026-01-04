

				/*if password is less than 8 characters and not contains at least 2 integers and 2 special characters
					then it will be considerd as Weak*/

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(int argc, char* argv[]) {

	int size = 100;
	char* str = new char[size];
	cout << "Enter a password: ";
	cin.getline(str, size);

	int len = strlen(str);

	int specialChar(0);
	int num(0);
	
	for (int i = 0; i < len; i++) {
		if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' ||
			str[i] == '%' || str[i] == '&' || str[i] == '*')
			specialChar++;
		while (str[i] >= '0' && str[i] <= '9') {
			num++;
			break;
		}
			
	}

	if (len >= 7 && specialChar >= 2 && num >= 2)
		cout << "Strong";
	else
		cout << "Weak";


	return 0;
	
	
}