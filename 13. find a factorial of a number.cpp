/******************************************************************************

c++ program for factorial of a number

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n,i;
    long factorial = 1.0;
    cout <<"Enter a positive integer"<<endl;
    cin >> n;
    
    if(n>0){
    for(i=1; i<=n;i++){
        factorial*=i;
    }
    cout <<"factorial of the numeber "<<n<< " is "<<factorial;
    }
    if (n<0)
    {
        cout <<"cannot do the factorial for a negative number";
    }
    
}
