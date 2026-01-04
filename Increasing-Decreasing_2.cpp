

#include<iostream>
using namespace std;
int main(){
    int _count, num, temp, loopCount, flag;

    cout<<"how many numbers do you want to enter: ";
    cin>>_count;

    loopCount=0;

    cout<<"Enter Numbers below: \n";

    while(loopCount<_count){
        cin>>num;

        if(loopCount==0){
            temp=num;
        }
        if(num>temp){
            flag = 0;
        }
        else if(num<temp){
            flag = 1;
        }
        else{
            flag = 2;
        }
        loopCount++;
    }

    if(flag = 0){
        cout<<"Values are increasing";
    }
    else if(flag == 1){
        cout<<"values are decreasing";
    }
    else{
        cout<<"values are neither increasing nor decreasing";
    }
    return 1;
}
