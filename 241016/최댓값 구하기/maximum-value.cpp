#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;

    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << a;
    if (b > a && b > c)
        cout << b;
    if (c > a && c > b)
        cout << c;
        
    return 0;
}