#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1; i<n; i++){               //n=5;
        for(int s=i; s<5; s++)
            cout<<" ";
        for(int j=1; j<=(i*2-1); j++)
            cout<<"*";
        cout<<endl;
    }
    for(int i=n; i>0; i--){               //n=5;
        for(int s=i; s<5; s++)
            cout<<" ";
        for(int j=1; j<=(i*2-1); j++)
            cout<<"*";
        cout<<endl;
    }



    return 0;
}
