

#include<iostream>
using namespace std;
bool isPalindrome(int&);

main(){
    int num;
    cout << "Enter a number to check whether its palindrome or not: ";
    cin >> num;

    bool _condition = isPalindrome(num);
    if(_condition == true)
        cout << endl << num << " is Palindrome number";
    else if(_condition == false){
        cout << endl << num << " is Not Palindrome number";
    }
}
bool isPalindrome(int& k){
                            
    int digit, rev, n;
    n = k;                //12321
    rev = 0;       

    while(k>0){
        digit = k % 10;           //12321 % 10  -->  1 from rightSide
        rev = (rev*10) + digit;       //1
        k = k/10;                         // 1232 
    }

    cout << "The reverse of the Number is: " << rev;
    
    if(n = rev)
        return true;
    else 
        return false;

} 