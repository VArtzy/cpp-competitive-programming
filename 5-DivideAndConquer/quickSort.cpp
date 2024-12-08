#include <iostream>

using namespace std;

int n;

void quickSort(int arr[], int left, int right) {
    if (left >= right) return;

    int pivot = arr[(left + right) / 2];

    int pl = left;
    int pr = right;
    while (pl <= pr) {
        while (arr[pl] <= pivot) {
            pl++; 
        } 
        while (arr[pr] > pivot) {
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

    quickSort(arr, left, pr);
    quickSort(arr, pl, right);
}

int main() {
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
}
