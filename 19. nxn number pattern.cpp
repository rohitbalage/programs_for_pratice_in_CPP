#include<iostream>
using namespace std;


int main(){

    /*
    Pattern in N lines
    0 <= N <= 50
    */
  int n;
  cin >> n;

  int i =1;

if(n >=0 && n<=50 )
{

  while(i<=n)
  {
	  int j=1;
	  	while(j<=n)
		  {
			  cout<<n;
			   j++;
		  }
		  cout <<endl;
		 
		  i++;
  }
}

else {
  cout << "Number is greater than 50 or less than zero";
}
}