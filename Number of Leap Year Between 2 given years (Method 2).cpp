
/* This Program Prints the total number of leap years between 2 years (including the Years entered by the user)  */

#include <iostream>
using namespace std ;

int main ()

{
	
	cout<<"Enter Two Years to find Number of Leap Year(s) Between Them";
	
	int year1 , year2 ;
	
	cout<<"\n\nEnter Starting Year: 	";
	cin>>year1;
	
	if(year1<1582)
	{
		cout<<"\nWARNING: For Leap Year please Enter the Year Greater Than 1582 ";
		return 0;
	}
	
	cout<<"\n\nEnter Ending Year: 	";
	cin>>year2;
	
	if(year2<1582)
	{
		cout<<"\nWARNING: For Leap Year please Enter the Year Greater Than 1582 ";
		return 0;
	}
	

	
	int leap_year ;
	
	if (year1>year2)
	{
		leap_year = (year1/4-year1/100+year1/400)-(year2/4-year2/100+year2/400)+1;
		cout<<"\n Total Number of Leap Years (including years enterd by user) between 	"<<year1<<"	and "<<year2<<" 	is/are 	"<<leap_year ;
		return 0;
	}
	else 
	{
		if (year2>year1)
		{
			leap_year = (year2/4-year2/100+year2/400)-(year1/4-year1/100+year1/400)+1;
			cout<<"\n Total Number of Leap Years (including years enterd by user) between	"<<year1<<" and "<<year2<<" 	is/are 	"<<leap_year ;
		}
	}
	
	
	return 0;
	
}
