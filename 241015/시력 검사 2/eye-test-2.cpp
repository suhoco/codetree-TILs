#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a;

    cin >> a;

    if (1 <= a)
        cout << "High";

    else if (a < 0.5)
        cout << "Low";

    else
        cout << "Middle";
    return 0;
}