/******************************************************************************
c++ program to check the number is even or odd

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
   int a;
   cout<<"Enter the number"<<endl;
   cin>>a;
   
   if(a%2==0)
   {
       cout <<"Number is even";
   }
   else
   {
       cout <<"Number is odd";
   }

    return 0;
}