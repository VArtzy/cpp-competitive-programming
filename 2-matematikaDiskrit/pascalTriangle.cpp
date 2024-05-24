#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> precomputeCombination(int n) {
    vector<vector<int>> c(n + 1, vector<int>(n + 1));
    for (int i = 0; i <= n; i++) {
        c[i][0] = 1;
        for (int j = 1; j <= i - 1; j++) {
            c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
        }
        c[i][i] = 1;
    }
    return c;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> c = precomputeCombination(n);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
