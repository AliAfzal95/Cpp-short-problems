#include <iostream>
#include<cmath>
using namespace std;

int main()
{
     int n;
     cout<<"Enter num: ";
     cin>>n;

     int result;
     n = (n-1);
     result = floor(pow(10,n));
     cout<<result;

    return 0;
}
