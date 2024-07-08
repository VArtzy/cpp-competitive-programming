#include <iostream>

using namespace std;

int n;

int countTriplets(int arr[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) count++;
            }
        }
    }
    return count;
}

int main() {
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << countTriplets(arr);
}
