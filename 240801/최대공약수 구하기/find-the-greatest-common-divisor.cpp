#include <iostream>
using namespace std;

int    FindMaxNum(int n, int m) {
    while (m != 0) {
        int temp = n % m;
        n = m;
        m = temp;
    }
    return (n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    cin >> n >> m;

    cout << FindMaxNum(n, m);
    return 0;
}