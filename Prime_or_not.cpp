

#include<iostream>
using namespace std;

int main(){
    int n;
    int flag ;
    cout<<"Enter a number to check whether its prime or not: ";
    cin>>n;

    if(n%2 == 0){
        cout<<n<<" is not a prime number";
    }
    else if(n==2){
            cout<<n<<" is prime number";
    }
    else{
        int divider = 3;
        while(divider < n-1){
            if(n%divider==0){
                flag=1;
            }
            divider+=2;
        }
        if(flag==1){
         cout<<n<<" is not a prime number";
    }
      else
        {
            cout<<n<<" is a prime number";
        }
    }


    return 0;
}
