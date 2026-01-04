

#include<iostream>
using namespace std;

double my_sqrt(double num){
    //double limit=0;
    double right = num+1;
    double mid, sr=0;
    double left =0;
    while(sr*sr!=num){
        mid=(right+left)/2;
        if(mid*mid>num){
            right = mid;
        }
        else{
            left = mid;
        }
        sr = (right+left)/2;
    }
    return sr;
}
int main(){
    double num;
    cout<<"enter a number to find its sq. root: ";
    cin >> num;

    cout<<my_sqrt(num);

    return 0;
}
