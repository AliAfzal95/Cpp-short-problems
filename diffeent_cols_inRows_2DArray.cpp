

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int row, col;
    cout << "Enter number of rows of 2D array: ";
    cin >> row;
    
    vector<int> coloumns;

    int** arr = new int*[row];
    for(int i=0; i<row; i++){

        cout << "How many elements in Row " << i+1 << ": ";
        cin >> col;
        coloumns.push_back(col);

        arr[i] = new int[col];

        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<coloumns[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}