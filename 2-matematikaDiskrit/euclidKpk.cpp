
#include <iostream>

using namespace std;

int euclid(int a, int b) {
    if (b == 0) return a;
    else return euclid(b, a % b);
}

int kpk(int a, int b) {
    return (a * b) / euclid(a, b);
}

int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << kpk(a, b);
}
