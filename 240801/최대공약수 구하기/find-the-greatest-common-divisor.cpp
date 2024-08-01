#include <iostream>
#include <algorithm>
using namespace std;

// 최대공약수 n, m 이 나누어떨어지는 수 중 제일 큰 수

int FindGcd(int n, int m) {
    int gcd = 0;

    for (int i = 1; i <= min(n, m); i++) {
        if (n % i == 0 && m % i == 0) {
            gcd = i;
        }
    }
    return (gcd);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    cin >> n >> m;
    cout << FindGcd(n, m);
    return 0;
}