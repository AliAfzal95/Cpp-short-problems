

#include<iostream>
using namespace std;
double my_sqrt(double num){
    double limit= 0.00001;
    double left, right ,mid;
    left = 0;
    right = num+1;
    while(right-left>limit){
        mid = (left+right)/2;
        if(mid*mid>num){
            right = mid;
        }
        else {
            left = mid;
        }
    }
    return (left+right)/2;
}

int main(){
    double num;
    cout<<"enter a number to find its sq. root: ";
    cin >> num;

    cout<<my_sqrt(num);

    return 0;
}
