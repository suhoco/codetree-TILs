#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    if (n >= 90)
        cout << "A";
    else if (80 <= n)
        cout << "B";
    else if (70 <= n)
        cout << "C";
    else if (60 <= n)
        cout << "D";
    else
        cout << "F";
    return 0;
}