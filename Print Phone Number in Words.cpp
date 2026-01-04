


						/*Program to Print an Eight Digit Phone Number in Digits*/



#include <iostream>
using namespace std;

int main ()
{
	int Num , Num_1 , Num_2 , Num_3 , Num_4 , Num_5 , Num_6 , Num_7 , Num_8  ;
	
	
	cout << "Please Enter The Eight Digit Phone Number  : ";
	cin >> Num ;
	
	
	if ( Num < 00000000 || Num > 99999999) 
	{
		cout << "\n 			**WARNING: Phone Number should be Eight Digit**";
		return 0;
	}


		Num_1 = Num / 10000000 % 10;
		
		if (Num_1 == 0) cout <<"Zero  ";
		
		if (Num_1 == 1)	cout <<"One  ";
		
		if (Num_1 == 2) cout <<"Two  ";
		
		if (Num_1 == 3) cout <<"Three  ";
		
		if (Num_1 == 4) cout <<"Four  ";
		
		if (Num_1 == 5) cout <<"Five  ";
		
		if (Num_1 == 6) cout <<"Six	 ";
		
		if (Num_1 == 7) cout <<"Seven  ";
		
		if (Num_1 == 8) cout <<"Eight  ";
		
		if (Num_1 == 9) cout <<"Nine  ";
		
		

		Num_2 = Num / 1000000 % 10;

		if (Num_2 == 0) cout <<"Zero  ";

		if (Num_2 == 1)	cout <<"One  ";
		
		if (Num_2 == 2) cout <<"Two  ";
		
		if (Num_2 == 3) cout <<"Three  ";
		
		if (Num_2 == 4) cout <<"Four  ";
		
		if (Num_2 == 5) cout <<"Five  ";
		
		if (Num_2 == 6) cout <<"Six	 ";
		
		if (Num_2 == 7) cout <<"Seven  ";
		
		if (Num_2 == 8) cout <<"Eight  ";
		
		if (Num_2 == 9) cout <<"Nine  ";
		
		
		

		Num_3 = Num / 100000 % 10;
		
		if (Num_3 == 0) cout <<"Zero  ";

		if (Num_3 == 1)	cout <<"One  ";
		
		if (Num_3 == 2) cout <<"Two  ";
		
		if (Num_3 == 3) cout <<"Three  ";
		
		if (Num_3 == 4) cout <<"Four  ";
		
		if (Num_3 == 5) cout <<"Five  ";
		
		if (Num_3 == 6) cout <<"Six	 ";
		
		if (Num_3 == 7) cout <<"Seven  ";
		
		if (Num_3 == 8) cout <<"Eight  ";
		
		if (Num_3 == 9) cout <<"Nine  ";
		
		
		

		Num_4 = Num / 10000 % 10;
		
		if (Num_4 == 0) cout <<"Zero  ";
		
		if (Num_4 == 1)	cout <<"One  ";
		
		if (Num_4 == 2) cout <<"Two  ";
		
		if (Num_4 == 3) cout <<"Three  ";
		
		if (Num_4 == 4) cout <<"Four  ";
		
		if (Num_4 == 5) cout <<"Five  ";
		
		if (Num_4 == 6) cout <<"Six	 ";
		
		if (Num_4 == 7) cout <<"Seven  ";
		
		if (Num_4 == 8) cout <<"Eight  ";
		
		if (Num_4 == 9) cout <<"Nine  ";
		
		
		
		

		Num_5 = Num / 1000 % 10;

		if (Num_5 == 0) cout <<"Zero  ";
		
		if (Num_5 == 1)	cout <<"One  ";
		
		if (Num_5 == 2) cout <<"Two  ";
		
		if (Num_5 == 3) cout <<"Three  ";
		
		if (Num_5 == 4) cout <<"Four  ";
		
		if (Num_5 == 5) cout <<"Five  ";
		
		if (Num_5 == 6) cout <<"Six	 ";
		
		if (Num_5 == 7) cout <<"Seven  ";
		
		if (Num_5 == 8) cout <<"Eight  ";
		
		if (Num_5 == 9) cout <<"Nine  ";
		
		

		Num_6 = Num / 100 % 10;

		if (Num_6 == 0) cout <<"Zero  ";
		
		if (Num_6 == 1)	cout <<"One  ";
		
		if (Num_6 == 2) cout <<"Two  ";
		
		if (Num_6 == 3) cout <<"Three  ";
		
		if (Num_6 == 4) cout <<"Four  ";
		
		if (Num_6 == 5) cout <<"Five  ";
		
		if (Num_6 == 6) cout <<"Six	 ";
		
		if (Num_6 == 7) cout <<"Seven  ";
		
		if (Num_6 == 8) cout <<"Eight  ";
		
		if (Num_6 == 9) cout <<"Nine  ";
		
		

		Num_7 = Num / 10 % 10;

		if (Num_7 == 0) cout <<"Zero  ";
		
		if (Num_7 == 1)	cout <<"One  ";
		
		if (Num_7 == 2) cout <<"Two  ";
		
		if (Num_7 == 3) cout <<"Three  ";
		
		if (Num_7 == 4) cout <<"Four  ";
		
		if (Num_7 == 5) cout <<"Five  ";
		
		if (Num_7 == 6) cout <<"Six	 ";
		
		if (Num_7 == 7) cout <<"Seven  ";
		
		if (Num_7 == 8) cout <<"Eight  ";
		
		if (Num_7 == 9) cout <<"Nine  ";
		
		

		Num_8 = Num / 1 % 10;
		
		if (Num_8 == 0) cout <<"Zero  ";
		
		if (Num_8 == 1)	cout <<"One  ";
		
		if (Num_8 == 2) cout <<"Two  ";
		
		if (Num_8 == 3) cout <<"Three  ";
		
		if (Num_8 == 4) cout <<"Four  ";
		
		if (Num_8 == 5) cout <<"Five  ";
		
		if (Num_8 == 6) cout <<"Six	 ";
		
		if (Num_8 == 7) cout <<"Seven  ";
		
		if (Num_8 == 8) cout <<"Eight  ";
		
		if (Num_8 == 9) cout <<"Nine  ";
		
	
	return 0;
}
