#include <iostream>
using namespace std;
int main(){

cout <<"Enter two numbers";
int n1, n2, i, hcf;
cin>>n1>>n2;

//swaping numbers if n2 is greater than n1
if(n2>n1){
    int temp = n2;
    n2 = n1;
    n1=temp;
}

for(i=1 ;i<=n2; i++){
    if(n1%i==0 && n2%i==0){
 hcf =i;
}
}
cout <<"HCF of both the numbers is "<<hcf;

    return 0;
}