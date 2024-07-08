#include <iostream>

using namespace std;

int n;
int k;

bool solve(int i, int sum, int arr[]) {
    if (i == n) {
        if (sum == k) {
            return true;
        }
        return false;
    }
    bool opt1 = solve(i + 1, sum + arr[i], arr);
    bool opt2 = solve(i + 1, sum, arr);
    return opt1 || opt2;
}

bool solveSubsetSum(int arr[]) {
    return solve(0, 0, arr);
}

int main() {
    cin >> n;
    cin >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << solveSubsetSum(arr);
}
