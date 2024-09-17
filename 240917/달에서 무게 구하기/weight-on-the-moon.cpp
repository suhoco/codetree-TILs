#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int g = 13;
    double per = 0.165;

    cout << fixed;

    cout.precision(6);

    cout << g << " * " << per << " = " << g*per;

    return 0;
}