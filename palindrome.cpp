

#include<iostream>
#include<cmath>
using namespace std;

void isPalindrome(int);

main(){
    int num;
    cout<<"Enter a number to check whether its palindrome or not: ";
    cin>>num;
    isPalindrome(num);
    
}

void isPalindrome(int num){

    int numDummy = num;
    int  _condition;
    int rightEnd, leftEnd, _count, loopCounter, divider;

    if(num == 0)
        _condition = 0;

        // Finding length of int value
    int length = 0;
    _count = num;
    while(_count > 0){
        _count = _count/10;
        length++;
    }
    cout<<"Length of int value: "<<length<<endl;

    if(length == 1)
        _condition = 0;
    
    /*suppose number is 123321*/

       //100,000,000
    loopCounter = (length/2) ;        // 9/2 = 4

    for(int i=1; i<=loopCounter; i++){
        length = 0;
        _count = num;
        while(_count > 0){
            _count = _count/10;
            length++;
        }
        divider = pow(10,(length-1)); 
            //checking whether first and last digits of int value are equal or not
        rightEnd = num % 10;                        //3
        leftEnd = num / divider;                    //3
        if(rightEnd == leftEnd)
            _condition = 0;
        else 
            _condition = 1;


            //Removing first and last digit from int value
        num = num / 10;                         //12332
        length = 0;
        _count = num;
        while(_count > 0){
        _count = _count/10;
        length++;
    }
    cout<<"Length of int value inside loop: "<< length << endl;   //8
    divider = floor(pow(10, (length-1)));       //10000  use floor or ceil with pow func otherwise it will cause bugs
    num = num % divider;                //34543
    
    }
    
    cout<<numDummy;
    if(_condition == 0){
        cout << " is Palindrome";
        return;
    } 
    if(_condition == 1){
        cout << " is Not Palindrome";
        return;
    } 
}