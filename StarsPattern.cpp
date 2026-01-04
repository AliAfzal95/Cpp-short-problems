

//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int i, j, N;
//
//    cout <<"Enter Height: ";
//    cin >>N;
//
//    i=1;
//    while (i <= N) {
//        cout << "\t\t\t\t\t";
//        j = N;
//        while (j > i) {
//            cout << " ";
//            j--;
//        }
//
//        cout << "*";
//        j = 1;
//
//        while (j < (i - 1) * 2) {
//            cout << " ";
//            j++;
//        }
//
//        if (i == 1)
//            cout << "\n";
//        else
//            cout << "*\n";
//
//        i++;
//    }
//
//
//        i=N-1;
//        while (i >= 1) {
//            cout << "\t\t\t\t\t";
//            j = N;
//            while (j > i){
//                cout << " ";
//                j--;
//            }
//
//            cout << "*";
//            j = 1;
//
//
//            while (j < (i - 1) * 2) {
//                cout << " ";
//                j++;
//            }
//
//            if (i == 1)
//                cout << "\n";
//            
//            else
//                cout << "*\n";
//            
//            i--;
//        }
//
//    int count = N * 2 - 1;
//
//    cout <<endl<<endl<<endl;
//
//    for(i=1; i<=count; i++) {
//        cout <<"\t\t\t\t\t";
//        for(j=1; j<=count; j++) {
//            if(j==i || (j==count - i + 1))   
//                 cout <<"*";
//             else
//                 cout <<" ";    
//        }
//        cout <<endl;
//    }
//    return 0;
//}
