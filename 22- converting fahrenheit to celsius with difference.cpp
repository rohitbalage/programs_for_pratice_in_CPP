#include <iostream>
using namespace std;

int main()
{
int S,E,W, Cel;
cin >>S>>E>>W;

while(S<=E)
{

	Cel = (S-32)*5/9;
	cout<<S<<" "<<Cel<< endl;
	S=S+W;
}



	return 0;
}
