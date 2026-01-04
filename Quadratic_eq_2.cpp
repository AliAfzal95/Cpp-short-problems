
                /*Program to calculate quadratic equation for the the given values of a,b,c*/
#include<iostream>
#include<cmath>
using namespace std;

bool quadratic_eq(double a, double b, double c, double sol1, double sol2){
    double disc;
    disc = (b*b)-4*a*c;
    if(disc>0)
    {
        disc = sqrt(disc);
        sol1 = (-b+disc) / (2*a);
        sol2 = (-b-disc) / (2*a);
         cout<<"\nAs Disc. is defined so there will be two solutions";
         cout    <<"\n First Solution is: "<<sol1
            <<"\n Second Solution is: "<<sol2<<endl<<endl;
            return true;
    }
      else  if (disc == 0)
    {
        sol1 = -b / (2*a);
        cout<<"As Disc. is equals zero so there is only one solution"
            <<"\nSolution is: "<<sol1<<endl<<endl;
            return true;
    }
    else {
            cout<<"As Disc is undefined so there is no solution";
        return false;
    }
}

int main(){
    double a, b, c,sol1,sol2;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    quadratic_eq(a,b,c);
    return 0;
}
