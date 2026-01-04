#include<iostream>
using namespace std;
int main()
{
    int count1, num, temp, looptime = 0;
    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = false;

    cout<<"Enter the number of time you want to give value: ";
    cin>>count1;

    while(looptime<count1)
    {
        cout<<"Enter value: ";
        cin >> num;

        if (looptime == 0)
        {
            temp = num;
        }

        if (num>temp)
        {
            flag1 = true;
        }
        else if (num<temp)
        {
            flag2 = true;
        }
        else
        {
            flag3 = true;
        }

        looptime++;
    }

    if(flag1 == true && flag2 == true)
    {
        cout<<"Values are neither increasing nor decreasing";
    }
    else if(flag1 == true)
    {
        cout<<"Values are increasing";
    }
    else
    {
        cout<<"Values are decreasing";
    }

}
