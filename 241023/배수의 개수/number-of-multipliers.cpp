#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt_3 = 0, cnt_5 = 0;
    int n;

    for (int i = 0; i < 10; i++) {
        
        cin >> n;
        if (n % 3 == 0 && n % 5 == 0) {
            cnt_3++;
            cnt_5++;
        }

        else if (n % 3 == 0)
            cnt_3++;
        
        else if (n % 5 == 0)
            cnt_5++;
    }

    cout << cnt_3 << " " << cnt_5;

    return 0;
}