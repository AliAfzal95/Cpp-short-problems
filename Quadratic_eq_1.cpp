
            /*Program to calculate quadratic equation for the the given values of a,b,c*/
#include<iostream>
#include<cmath>
using namespace std;

double quadratic_eq(double a, double b, double c)
{
    double disc;
    disc = (b*b)-4*a*c;

     double sol1, sol2;
     if(disc>0){
        disc = sqrt(disc);
        sol1 = (-b+disc) / (2*a);
        sol2 = (-b-disc) / (2*a);
        cout<<"\nAs Disc. is defined so there are two solutions \n";
        cout<<"\nFirst Solution is: "<<sol1
            <<" \nSecond Solution is: "<<sol2;
            return 0;

     }

     if(disc==0){
        sol1 = -b/(2*a);
        cout<<"As disc. is equals zero so there is only one solution: ";
        cout<<"\n Solution is: ";return sol1;
     }
     else{
        cout<<"As Disc. is not defined so There is no solution";
        return 0;
     }

}

int main(){
    double a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    cout<<quadratic_eq(a,b,c);
    return 0;
}
