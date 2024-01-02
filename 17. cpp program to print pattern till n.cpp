/*  printing pattern 

1 
12 
123
1234 
12345
123456
till n

*/
#include <iostream>
using namespace std;


int main()

{
 
 int n;
 
 cout << "enter your number";
 cin >>n;

for (int i = 1; i <= n;i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }
        cout << endl;
    }
}