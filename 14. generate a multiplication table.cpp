/******************************************************************************

c++ program to generate a multiplication table

*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
 int n,i;
 cout <<"Enter the number"<<endl;
 cin>>n;
 
 cout <<"the table for "<<n<< " is as follows "<<endl;
 for(i=1;i<=10;i++)
 {
     cout <<n << " * " <<i <<" = " <<n*i<<endl;
 }
 
}