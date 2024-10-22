#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if ((i % 3 == 0) || // 3의 배수인 경우
            (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) || // 1의자리에 3,6,9가 있는 경우
            (i / 10 == 3 || i / 10 == 6 || i / 10 == 9)) // 10의 자리에 3,6,9가 있는 경우
            cout << "0 ";

        else
            cout << i << " ";
    }
    return 0;
}