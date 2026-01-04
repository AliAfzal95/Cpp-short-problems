
                    /*Program to convert temperature from celcius to fahrenheit*/
#include<iostream>
using namespace std;

double celcius_to_fahren(double C)
{
    double fahren;
    fahren = (9.0/5.0)*C+32;
    cout<<"Temperature in fahrenheit is: ";
    return fahren;
}

int main(){

    cout<<"Enter the temperature in celcius: ";
    double C;
    cin>>C;

    cout<<celcius_to_fahren(C);
    return 0;
}
