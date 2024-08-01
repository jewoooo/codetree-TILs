#include <iostream>
#include <algorithm>
using namespace std;

// 최대 공약수를 구한뒤 n * m / 최대공약수 = 최소공배수

int    FindGcd(int n, int m) {
    int gcd = 0;

    for (int i = 1; i <= min(n, m); i++) {
        if (n % i == 0 && m % i == 0)
            gcd = i;
    }
    return (gcd);
}
void    FindN(int n, int m) {
    cout << n * m / FindGcd(n, m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    cin >> n >> m;
    FindN(n, m);
    return 0;
}