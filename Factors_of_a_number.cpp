

#include<iostream>
using namespace std;
int main(){
    int num, _count=1;
    cout<<"Enter a number to find its factors: ";
    cin>>num;

    for(int i=2; i<num; i++){
        if(num%i==0){
                cout<<_count<<". ";
                cout<<i<<" is the factor of "<<num<<endl;
        _count++;
        }
    }

    return 0;
}
