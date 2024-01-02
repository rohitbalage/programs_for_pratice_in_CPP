/******************************************************************************

C++ program to find size of int, float, double and char in your system

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout <<"size of int: "<<sizeof(int)<<" bytes"<<endl;
    cout <<"size of double: "<<sizeof(double)<< " bytes"<<endl;
    cout <<"size of char: "<<sizeof(char)<<" bytes"<<endl;
    return 0;
}