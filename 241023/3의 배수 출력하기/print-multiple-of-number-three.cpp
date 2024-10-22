#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i = 1;

    cin >> n;

    while (i*3 <= n) {
        cout << i*3 << " ";
        i++;
    }
    
    return 0;
}