#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    if (3000 <= n)
        cout << "book";
    else if (1000 <= n)
        cout << "mask";
    else if (500 <= n)
        cout << "pen";
    else
        cout << "no";
    return 0;
}