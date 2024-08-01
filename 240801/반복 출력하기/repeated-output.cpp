#include <iostream>
using namespace std;

void    PrintStr() {
    cout << "12345^&*()_\n";
}

void    PrintN(int n) {
    for (int i = 0; i < n; i++) {
        PrintStr();
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;
    PrintN(n);
    return 0;
}