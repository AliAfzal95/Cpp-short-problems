
#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;

    int _max;
    _max = (num1>num2)? num1:num2;

    do{
        if(_max%num1 == 0 && _max%num2 == 0){
            cout<<"LCM = "<<_max;
            break;
        }
        else _max++;
    }
    while(true);

    return 0;
}
