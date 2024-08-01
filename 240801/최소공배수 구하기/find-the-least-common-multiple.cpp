#include <iostream>
#include <algorithm>
using namespace std;

void    FindN(int n, int m) {
    int i = max(n, m);

    while (true) {
        if (i % n == 0 && i % m == 0)
            break ;
        i++;
    }
    cout << i;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    cin >> n >> m;
    FindN(n, m);
    return 0;
}