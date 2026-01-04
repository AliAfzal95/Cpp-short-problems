

#include<iostream>
using namespace std;
int main(){

    char c;
    cerr<<"Enter an alphabet to check whether its vowel or consonant: ";
    cin>>c;

    bool isLowerCase, isUpperCase;

    isLowerCase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');  //isLowerCase evaluates to true if any one of these true
    isUpperCase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(!isalpha(c)){
        cout<<"Error!\n";
        cout<<c<<" is not an alphabetic character";
    }
    else if(isLowerCase || isUpperCase){
        cout<<c<<" is a vowel";
    }
    else{
        cout<<c<<" is a consonent";
    }
    return 0;
}
