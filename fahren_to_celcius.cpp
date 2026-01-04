
            /*Program to convert temperature from fahrenheit to celcius*/
#include<iostream>
using namespace std;

double fahren_to_celcius(double F)
{
    double celcius;
    celcius = (F-32) * 5.0/9.0;
    cout<<"\n\nTemperature in celcius is: ";
    return celcius;
}

int main()
{
    double F;
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>F;

    cout<<fahren_to_celcius(F);
    return 0;
}
