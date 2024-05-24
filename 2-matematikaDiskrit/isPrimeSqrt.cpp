#include <iostream>

using namespace std;

bool isPrimeSqrt(int n) {
    if (n < 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i += 1;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << isPrimeSqrt(n);
}
