#include <iostream>
using namespace std;

int main()
{
    int n, d=2;
    cout << "Enter your number"<<endl;
    cin >> n;
    bool divided =false;

    while(d <n)
    {
        if(n%d==0){
            divided =true;
        }
        
        d++;
        
    }
    
    if(!divided)
    {
         cout <<"number is prime"<<endl;
    }
    else{
           cout<<"the number is not prime";
    }
   

}