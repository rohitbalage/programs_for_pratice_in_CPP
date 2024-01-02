/* pattern to print
1 
23
345
4567
56789

*/

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int row = 1, num = 1;

    while (row <= N) {
        int col = 1;
        int startingNumber = num;

        while (col <= row) {
            cout << startingNumber;
            startingNumber++;
            col++;
        }

        cout << endl;
        num++;
        row++;
    }

    return 0;
}
