/*Enter any negative number to terminate */
#include<iostream>
using namespace std;
int main(){
    double num, sum, avg, minimum, maximum;

    sum = maximum = 0;
    minimum = 1.7976931348623157E+308;   //the max value that a double can hold

    for(; num>=0 ;){
        cout<<"Enter a number: ";
        cin>>num;
        if(num>0){
            sum += num;
            if(num<minimum) minimum = num;
            if(num>maximum) maximum = num;
        }
    }

    cout <<"Sum is: "<<sum;
    cout <<"\nMax is: "<<maximum;
    cout <<"\nMin is: "<<minimum;

    return 0;
}
