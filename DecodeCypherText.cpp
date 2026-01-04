//In this program the user will have to enter the cyphered text (String)
//The code will decypher the text (which is reversed form of input discarding any special char and numbers)

#include<iostream>
#include<string>
using namespace std;

int main(int argc, char* argv[]) {


	string str;
	cout << "Enter a cypher string to decode it: ";
	getline(cin, str);

	int len = str.length();
	int i(len-1);

	while (i>=0) {
		if (isalpha(str[i]) ||
			str[i] == ' ') {
			cout << str[i];
		}
		i--;
	}




	return 0;


}
