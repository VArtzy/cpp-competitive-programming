#include <iostream>

using namespace std;

int n;

void partition(int arr[], int left, int right, int pivot) {
    int pl = left;
    int pr = right;
    while(pl <= pr) {
        while(arr[pl] <= pivot) {
            pl++;
        }
        while(arr[pr] > pivot) {
            pr--;
        }
        if (pl <= pr) {
            int temp = arr[pl];
            arr[pl] = arr[pr];
            arr[pr] = temp;
            pl++;
            pr--;
        }
    }
}

int main() {
    int p;
    cin >> n;
    cin >> p;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    partition(arr, 0, n - 1, p);

    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
}
