



#include <iostream>
using namespace std ;

int main()

{
	int d=4 , m=10 , y=2020 ;

	cout<<"Enter Date , Month and Year Below Between 1/1/1900 and 31/12/2500  to know the Day Name on This Date";

	cout<<"\n\nEnter Date of the Month: 	" ;
	cin>>d;

	if(d<1 || d>31)
	{
		cout<<"\n				**Please Enter a valid date between 1 and 31**";
		return 0;
	}

	cout<<"\n\nEnter Month: 	" ;
	cin>>m;

	if(m<1 || m>12)
	{
		cout<<"\n				**Please Enter a valid Month between 1 and 12**";
		return 0 ;
	}


	cout<<"\n\nEnter the Year: 	";
	cin>>y;

	if(y<1900 || y>2500)
	{
		cout<<"\n				**Please Enter the Year between 1900 and 2500**";
		return 0 ;
	}

	int weekday ;
	if(m<3){
        d = d+y;
        y--;
	}
	else
        d = d+(y-2);

        weekday = 23*m/9+d+4+y/4-y/100+y/400;
        weekday = weekday%7;

	if (weekday==1)
	{
		cout<<"\n					Its MONDAY";
	}
	else if (weekday==2)
	{
		cout<<"\n					Its TUESDAY";
	}
	else if (weekday==3)
	{
		cout<<"\n					Its WEDNESDAY";
	}
	else if (weekday==4)
	{
		cout<<"\n					Its THURSDAY";
	}
	else if (weekday==5)
	{
		cout<<"\n					Its FRIDAY";
	}
	else if (weekday==6)
	{
		cout<<"\n					Its SATURDAY";
	}
	else if (weekday==0)
	{
		cout<<"\n					Its SUNDAY";
	}
}




















