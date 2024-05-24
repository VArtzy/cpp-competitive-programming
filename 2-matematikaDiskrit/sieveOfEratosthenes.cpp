#include <iostream>
#include <vector>

using namespace std;

vector<int> sieveOfEratosthenes(int n) {
  bool eliminated[n];
  vector<int> primeList;
  for (int i = 2; i <= n; i++) {
    if (!eliminated[i]) {
      primeList.push_back(i);
      int j = i * i;
      while (j <= n) {
        eliminated[j] = true;
        j = j + i;
      }
    }
  }
  return primeList;
}

int main() {
  int n;
  cin >> n;
  vector<int> primeList = sieveOfEratosthenes(n);
  for (int i = 0; i < primeList.size(); i++) {
    cout << primeList[i] << endl;
  }
}
