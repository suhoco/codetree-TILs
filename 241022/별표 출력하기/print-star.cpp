#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    /* 
    i = 0; cnt = 3 ***
    i = 1; cnt = 2 **
    i = 2; cnt = 1 *
    i = 3; cnt = 2 **
    i = 4; cnt = 3 ***

    if ( i <= 2)
    i = 0; cnt = 3 ***
    i = 1; cnt = 2 **
    i = 2; cnt = 1 *
    i = 3; cnt = 0 
    i = 4; cnt = 1 *
    */

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;
    }

    for (int i = n-2; i >= 0; i--) {
        for (int j = 0; j <= i; j++)
            cout << "* ";
        cout << endl;        
    }
}