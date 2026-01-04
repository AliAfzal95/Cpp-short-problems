#include<iostream>
using namespace std;

void Show_Units(int D);
void Show_Teen(int D);
void Show_Tens(int D);

int main(){

    int num;
    int menu;
    bool _condition = true;

    while(_condition){
        here:
        cout<<"Enter a number ranging b/w 1 and 9999: ";
        cin>>num;

    if(num<1 || num>9999){
        cout<<"\nPlease Enter a valid number b/w 1 and 9999\n\n";
        goto here;
    }

    cout<<"Number in words --> ";
    //2987
    int num2, num3, num4, num5, num6, num7, num8, num9;

    num2 = num/1000; //2
    num3 = num%1000; //987

    num4 = num3/100; //9
    num5 = num3%100; //87

    num6 = num5/10; //8
    num7 = num5%10; //7

    if(num>1000 && num%1000 != 0 && num%1000 != num5){
        Show_Units(num2);
        cout<<" Thousand ";
        Show_Units(num4);
        cout<<" Hundred";

        if(num5>=10 && num5<20){
            Show_Teen(num5);
        }else {
            cout<<" ";
            Show_Tens(num6);
            cout<<" ";
            Show_Units(num7);
        }
    }
    else if(num>1000 && num%1000 != 0 && num%1000 == num5){
        Show_Units(num2);
        cout<<" Thousand ";

        if(num5>=10 && num5<20){
            Show_Teen(num5);
        }else {
            cout<<" ";
            Show_Tens(num6);
            cout<<" ";
            Show_Units(num7);
        }
    }
    else if(num>=1000 && num%1000 == 0){
        Show_Units(num2);
        cout<<" Thousand";
    }
    else if(num>100 && num<=999 && num%100 != 0){
        Show_Units(num4);
        cout<<" Hundred";
        if(num5>=10 && num5<20){
                cout<<" ";
            Show_Teen(num5);
        }else {
            cout<<" ";
            Show_Tens(num6);
            cout<<" ";
            Show_Units(num7);
        }
    }
    else if(num>=100 && num<=999 && num%100 == 0){
        Show_Units(num4);
        cout<<" Hundred";
    }
    else if(num>0 && num<100){
      if(num>=1 && num<=9){
        Show_Units(num);
      }
      else if(num>=10 && num<20){
        Show_Teen(num);
      }
      else if(num>= 20 && num<= 99 && num%10 != 0){
        Show_Tens(num6);
        cout<<" ";
        Show_Units(num7);
      }
      else if(num>= 20 && num%10 == 0){
        Show_Tens(num6);
      }
    }
    cout<<"\n\nDo you want to convert numbers to words again? ";
    cout<<"\n 0. No \n 1. Yes";
    cout<<"\nEnter 0 or 1: ";
    cin>> _condition;
    cout<<endl<<endl;
    while(!_condition){
        cout<<"\n\n\n               ThankYou!!!\n\n\n";
        return 0;
    }
    }
}

void Show_Units(int D){
if(D == 1)
cout<<"One";
if(D == 2)
cout<<"Two";
if(D == 3)
cout<<"Three";
if(D == 4)
cout<<"Four";
if(D == 5)
cout<<"Five";
if(D == 6)
cout<<"Six";
if(D == 7)
cout<<"Seven";
if(D == 8)
cout<<"Eight";
if(D == 9)
cout<<"Nine";
return;
}

void Show_Teen(int D){
if(D == 10)
cout<<"Ten";
if(D == 11)
cout<<"Eleven";
if(D == 12)
cout<<"Twelve";
if(D == 13)
cout<<"Thirteen";
if(D == 14)
cout<<"Fourteen";
if(D == 15)
cout<<"Fifteen";
if(D == 16)
cout<<"Sixteen";
if(D == 17)
cout<<"Seventeen";
if(D == 18)
cout<<"Eighteen";
if(D == 19)
cout<<"Nineteen";
return;
}

void Show_Tens(int D){
if(D == 2)
cout<<"Twenty";
if(D == 3)
cout<<"Thirty";
if(D == 4)
cout<<"Forty";
if(D == 5)
cout<<"Fifty";
if(D == 6)
cout<<"Sixty";
if(D == 7)
cout<<"Seventy";
if(D == 8)
cout<<"Eighty";
if(D == 9)
cout<<"Ninety";
return;
}




















































