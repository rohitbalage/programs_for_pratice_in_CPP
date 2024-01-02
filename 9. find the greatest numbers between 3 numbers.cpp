/******************************************************************************
c++ program to find greatest among 3 numbers

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout <<"Enter 3 numbers";
    cin >>a>>b>>c;
    
    if(a>b && a>c){
        cout<<"a is greater and the number is "<<a;
        
    }
    else if(b>a && b>c)
    {
        cout <<"b is greater and the number is "<<b;
        
    }
    else{
        cout<<"c is greater and the number is "<<c;
    }

    return 0;
}