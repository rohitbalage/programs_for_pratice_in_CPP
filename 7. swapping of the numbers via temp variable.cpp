/******************************************************************************

c++ program to swap the numbers using temperary variable

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int a=10, b=20, temp;
   cout<<"The numbers before swapping are:"<<endl;
   cout<<"a = "<<a<<" b = "<<b<<endl;
   
   temp =a;
   a=b;
   b=temp;
   
   cout<<"The numbers after swapping are: "<<" a is "<<a<<" b is "<<b;
}