#include <iostream>

using namespace std;

int n;

int findMax(int arr[], int left, int right) {
    if (left == right) return arr[left];
    
    int mid = (left + right) / 2;
    int leftMax = findMax(arr, left, mid);
    int rightMax = findMax(arr, mid + 1, right);
    if (leftMax > rightMax) {
        return leftMax;
    } else {
        return rightMax;
    }
}

int main() {
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findMax(arr, 0, n - 1);
}
