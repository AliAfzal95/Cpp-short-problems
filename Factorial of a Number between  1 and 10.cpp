



#include <iostream>
using namespace std ;

int main ()

{
    int N , F10 , F9 , F8 , F7 , F6 , F5 , F4 , F3 , F2 , F1 ;
    
    cout<<"Enter a Number between 1 and 10 to find its Factorial     " ;
    cin>>N;
    
    F10 = 10*9*8*7*6*5*4*3*2*1 ;
    F9 = 9*8*7*6*5*4*3*2*1 ;
    F8 = 8*7*6*5*4*3*2*1 ;
    F7 = 7*6*5*4*3*2*1 ; 
    F6 = 6*5*4*3*2*1 ;
    F5 = 5*4*3*2*1 ;
    F4 = 4*3*2*1 ;
    F3 = 3*2*1 ;
    F2 = 2*1 ;
    F1 = 1 ;
    
    if (N<1 || N>10)
    {
        cout<<"Please Enter a Number between 1 and 10" ;
    }
    else 
    {
     if (N==10)
     {
         cout<<"Factorial of 10 is  "<<F10;
     }
     else
     {
         if (N==9)
         {
             cout<<"Factorial of 9 is  "<<F9;
         }
         else
         {
             if(N==8)
             {
                 cout<<"Factorial of 8 is  "<<F8;
             }
             else
             {
                 if(N==7)
                 {
                     cout<<"Factorial of 7 is  "<<F7;
                 }
                 else 
                 {
                     if(N==6)
                     {
                         cout<<"Factorial of 6 is  "<<F6;
                     }
                     else
                     {
                         if(N==5)
                         {
                             cout<<"Factorial of 5 is  "<<F5;
                         }
                         else
                         {
                             if(N==4)
                             {
                                 cout<<"Factorial of 4 is  "<<F4;
                             }
                             else
                             {
                                 if (N==3)
                                 {
                                     cout<<"Factorial of 3 is  "<<F3;
                                 }
                                else
                                {
                                    if (N==2)
                                    {
                                        cout<<"Factorial of 2 is  "<<F2;
                                    }
                                    else 
                                    {
                                        if(N==1)
                                        {
                                            cout<<"Factorial of 1 is  "<<F1;
                                        }
                                    }
                                    
                                }
                             }
                         }
                     }
                 }
             }
         }
     }
}


return 0 ;

}




























