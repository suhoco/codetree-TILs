#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, n;

    cin >> a >> n;

    for (int i = 0; i < n; i++) {
        a += n;
        cout << a << endl;
    }
    return 0;
}