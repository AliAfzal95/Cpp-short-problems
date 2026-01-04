

#include<iostream>
using namespace std;

void path_to_Princes(int n){
    char arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin>>arr[i][j];
    }
    cout<<endl;cout<<endl;
    int r1,c1;
    r1 = c1 = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            if(arr[i][j] == 'm'){
                r1 = i; c1 = j;
            }
    }


    cout<<endl;cout<<endl;
    int r2,c2;
    r2 = c2 = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            if(arr[i][j] == 'p'){
                r2 = i; c2 = j;
            }
    }

    int row = r2-r1;
    if(row > 0){
        for(int i=0; i<row; i++){
            cout<<"down"<<endl;
        }
    }
    else if(row<0){
            row = -(row);
        for(int i=0; i<row; i++){
            cout<<"up"<<endl;
        }
    }

    int col = c2 - c1;
    if(col > 0){
        for(int i=0; i<col; i++){
            cout<<"right"<<endl;
        }
    }
    else if(col<0){
            col = -(col);
        for(int i=0; i<col; i++){
            cout<<"left"<<endl;
        }
    }
    cout<<endl;cout<<endl<<"* = mp"<<endl<<endl;


    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        if(arr[i][j] == 'm')
            arr[i][j] = '-';
        if(arr[i][j] == 'p')
            arr[i][j] = '*';

         cout<<arr[i][j]<<" ";
        }
            cout<<endl;
    }

    return;
}
int main(){

    path_to_Princes(5);

    return 0;
}
