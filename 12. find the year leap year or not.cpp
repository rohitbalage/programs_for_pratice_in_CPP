/******************************************************************************

c++ program to check if they are leap year or not

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int year;
    cout <<"Enter the leap year";
    cin >> year;
    
    if(year % 400 == 0)
    {
        cout <<year <<" year is a leap year";
    }
    else if(year % 100 ==0)
    {
        cout<<"year is not a leap year";
    }
    else if(year % 4 ==0)
    {
        cout <<year<<" year is a leap year";
    }
    else
    {
        cout <<year <<" year is not a leap year";
        
    }
    return 0;
    }