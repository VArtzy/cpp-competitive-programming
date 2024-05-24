#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long num = N;
    int divisorCount = 1;

    for (long long i = 2; i*i <= num; i++) {
        int factorCount = 0;
        while (num % i == 0) {
            factorCount++;
            num /= i;
        }
        divisorCount *= (1 + factorCount);
    }

    if (num > 1) {
        divisorCount *= 2;
    }

    if  (divisorCount % 2 == 0) {
        cout << "lampu mati" << endl;
    } else {
        cout << "lampu menyala" << endl;
    }
}
