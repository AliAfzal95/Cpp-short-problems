

#include<iostream>
using namespace std;
int main(){

    cout<<"Enter a number to check whether its prime or not: ";
    int num;
    cin>>num;
    bool flag;

    if(num%2 == 0){
        cout<<num<<" is not a prime number";
    }
    else if(num == 2){
        cout<<num<<" is a prime number";
    }
    else{
        int divisor;
        divisor = 3;
        while(divisor<num-1){
            if(num%divisor==0){
                flag = true;
            }
            divisor+=2;
        }
    }

    if(flag == true){
        cout<<num<<" is not a prime number";
    }
    else{
        cout<<num<<" is a prime number";
    }
    return 0;
}
