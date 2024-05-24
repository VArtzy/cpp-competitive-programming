#include <iostream>

using namespace std;

int euclid(int a, int b) {
    if (b == 0) return a;
    else return euclid(b, a % b);
}

int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << euclid(a, b);
}
