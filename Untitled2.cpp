

#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cerr<<"Type in your name> ";
    getline(cin, name);
    cout<<name<<", please enter your notes info. ";

    int OT, FH, OH, fif, twen;

    cout<<"\nNumber of 1k notes: ";
    cin>>OT;
    cout<<"Number of 5 hundred rupee notes: ";
    cin>>FH;
    cout<<"Number of one hundred rupee notes: ";
    cin>>OH;
    cout<<"Number of fifty rupee notes: ";
    cin>>fif;
    cout<<"Number of twenty rupee notes: ";
    cin>>twen;

    int totalAmount, remAmount;

    totalAmount = (OT*1000)+(FH*500)+(OH*100)+(fif*50)+(twen*20);   //12520
    cout<<"\nyour Total amount is: "<<totalAmount;

    OT = totalAmount/1000;           //12
    remAmount = totalAmount%1000;   //520
    FH = remAmount/100;           //5
    remAmount = remAmount%100;       //20
    OH = remAmount/100;           //0
    remAmount = remAmount%100;    //20
    fif = remAmount/50;            //0
    remAmount = (remAmount%50) - remAmount;        //20
    twen = remAmount/20;

    cout<<"\nyou have "<<OT<<" one thousand rupee notes in total";
    cout<<"\nyour remaining amount other than 1k notes is: "<<remAmount;

    return 0;

}
