

#include<iostream>
using namespace std;
int main(){
    int total_bill, amt_paid, arrears;

    cout<<"Enter the Total bill: ";
    cin>>total_bill;

    here:
    cout<<endl<<"Amount paid by the customer: ";
    cin>>amt_paid;

    if(amt_paid < total_bill){
        cout<<"\n\n\n please pay the specified amount ";
        goto here;
    }

    arrears = amt_paid - total_bill;
    cout << "\nYour remaining amount is: "<< arrears;  //13988

    int FT, OT, FH, OH, Fif, Twen, Ten, FR, TR, OR;

    FT = arrears/5000;
    arrears = arrears-(FT*5000);

    OT = arrears/1000;
    arrears = arrears-(OT*1000);

    FH = arrears/500;
    arrears = arrears-(FH*500);

    OH = arrears/100;
    arrears=arrears-(OH*100);

    Fif = arrears/50;
    arrears = arrears-(Fif*50);

    Twen = arrears/20;
    arrears = arrears-(Twen*20);

    Ten = arrears/10;
    arrears = arrears-(Ten*10);

    FR = arrears/5;
    arrears = arrears-(FR*5);

    TR = arrears/2;
    arrears = arrears-(TR*2);

    OR = arrears/1;


    cout << "\nFive   Thousand Notes:   "<<FT;
    cout << "\nOne    Thousand Notes:   "<<OT;
    cout << "\nFive   Hundred  Notes:   "<<FH;
    cout << "\nOne    Hundred  Notes:   "<<OH;
    cout << "\nFifty  Rupee    Notes:   "<<Fif;
    cout << "\nTwenty Rupee    Notes:   "<<Twen;
    cout << "\nTen    Rupee    Notes:   "<<Ten;
    cout << "\nFive   Rupee    coins:   "<<FR;
    cout << "\nTwo    Rupee    coins:   "<<TR;
    cout << "\nOne    Rupee    coins:   "<<OR;


return 0;

}
