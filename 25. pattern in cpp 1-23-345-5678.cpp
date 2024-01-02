/* pattern to print
1 
23
345
4567
56789

*/

#include <iostream>
using namespace std;

int main()

{
    int n;
    cin>>n;
    
    int i=1;
     int val =1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout <<val;
            j++;
            val++;
            
        }
        i++;
             
        cout<<endl;
    }
}