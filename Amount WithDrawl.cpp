



#include <iostream>
using namespace std ;

int main ()

{
    int  Am , Wd , DL  ; 
    
    cout<<"Enter The Total Amount in your Account:   ";
    cin>>Am;
    
    cout<<"\nWhat is Your Daily Withdrawl Limit:   " ;
    cin>>DL;
    
    if(DL>Am)
    {
        cout<<"\nWARNING: Your Daily Withdrawl Limit is more Than Total Amount in Your Account";
        return 0;
    }
    
    cout<<"\nEnter The Amount You Want to Withdraw:    " ;
    cin>>Wd;
    
    if(Wd%500!=0)
    {
        cout<<"\nYou can't Withdraw Money which is not a multiple of 500 ";
        return 0 ;
    }
    
    if(Wd>Am)
    {
        cout<<"\nYou don't have Enough money to withdraw ";
        return 0 ;
    }
    
    if(Wd>DL  && Wd<Am)
    {
        cout<<"\nYou can't Withdraw Money More Than your Daily Withdrawl limit   ";
        return 0 ;
    }
    
    int FT , OT , FH , Amount ;
    
    Amount = Wd-500 ;
    
    FT = Amount/5000;
    Amount = Amount-(FT*5000);
    
    OT = Amount/1000;
    Amount = Amount-(OT*1000);
    
    FH = Amount/500;
    Amount = Amount-(FH*500);
    
    cout<<"\nFive Thousand Rupee Notes are    "<<FT;
    
    cout<<"\nOne Thousand Rupee Notes are     "<<OT;
    
    cout<<"\nFive Hundred Rupee Notes are     "<<FH;
    
    
    
    
    return 0 ; 
    
}




