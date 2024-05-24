#include <iostream>

using namespace std;

int modularFactorial(int n, int k) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = (result * i) % k;
    }
    return result;
}

int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;
    cout << modularFactorial(n, k);
}
