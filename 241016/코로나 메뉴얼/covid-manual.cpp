#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a_flu, b_flu, c_flu;
    int a_temp, b_temp, c_temp;

    cin >> a_flu >> a_temp;
    cin >> b_flu >> b_temp;
    cin >> c_flu >> c_temp;

    if ((a_flu == 'Y' && a_temp >= 37) && ((b_flu == 'Y' && b_temp >= 37) 
    || (c_flu == 'Y' && c_temp >= 37)) || ((b_flu == 'Y' && b_temp >= 37) && (c_flu == 'Y' && c_temp >= 37)))
        cout << "E";
    else
        cout << "N";
    //E가 나오려면 3명중 A가 2명 이상 = a,b / b,c / c,a / a,b,c
    return 0;
}