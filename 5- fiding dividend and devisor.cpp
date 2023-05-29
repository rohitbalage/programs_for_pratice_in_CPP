/******************************************************************************

C++ program to find quotient and reminder

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int qut, remid, divi, divide;
    cin>>divide;
    cin>>divi;
    
    remid = divide%divi;
    qut = divide/divi;
    
    cout<<"The reminder is "<<remid<<" and quotient is "<<qut;
    return 0;
}