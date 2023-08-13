/*
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1


Input format :
Two integers x and n (separated by space)
Output Format :
x^n (i.e. x raise to the power n)
Constraints:
0 <= x <= 8 
0 <= n <= 9
Sample Input 1 :
 3 4
Sample Output 1 :
81
Sample Input 2 :
 2 5
Sample Output 2 :
32

*/

#include<iostream>
using namespace std;
int main() {
	// Write your code here
	int n, pow;
	cin >>n>>pow;

        
    if (n==0 && pow >0)  
	{
		cout<<0;
	}

	else	if (n==0 && pow ==0)
    {
        cout<<1;
    }

else	if (n>0 && pow ==0)
    {
        cout<<1;
    }
	
    else 
    
    {
        
    if( (0<n && n<=8) && (0<pow && pow <=9) )
    {
    int result =1;
	int i =1;
	while(i<=pow)
	{
		result=result*n;
		i++;
	}
	
	cout <<result;
	 
    }
	else
	{
	    cout <<"enter valid entry";
	}
}

}