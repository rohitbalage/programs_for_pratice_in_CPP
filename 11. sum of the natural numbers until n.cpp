/******************************************************************************

c++ program to find the sum of natural numbers

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n,i, sum =0;
    cin >> n;
    
    for(i=0; i<=n;i++){
        sum+=i;
    }
    
    cout <<"sum of the numbers until "<<n<< " is "<<sum;
    
}