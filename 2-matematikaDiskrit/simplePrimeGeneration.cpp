#include <iostream>
#include <vector>

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

vector<int> simplePrimeGeneration(int n) {
    vector<int> primeList;
    for (int i = 2; i <= n; i++) {
        if (isPrimeSqrt(i)) {
            primeList.push_back(i);
        }
    }
    return primeList;
}

int main() {
    int n;
    cin >> n;
    vector<int> primeList = simplePrimeGeneration(n); 
    for (int i = 0; i < primeList.size(); i++) {
        cout << primeList[i] << endl; 
    }
}
