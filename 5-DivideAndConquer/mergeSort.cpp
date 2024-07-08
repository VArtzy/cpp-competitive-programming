#include <iostream>

using namespace std;

int n;

void merge(int arr[], int al, int ar, int bl, int br) {
    int size = br - al + 1; // + 1 because of 0 based index
    int temp[size];
    int tIdx = 0;
    int aIdx = al;
    int bIdx = bl;

    // bandingkan elemen array al - ar dengan bl - br
    while (aIdx <= ar && bIdx <= br) {
        if (arr[aIdx] <= arr[bIdx]) {
            temp[tIdx] = arr[aIdx];
            aIdx++;
        } else {
            temp[tIdx] = arr[bIdx];
            bIdx++;
        }
        tIdx++;
    }

    // jika array al - ar atau bl - br bersisa, letakan di paling kanan arr temp karena paling besar
    while (aIdx <= ar) {
        temp[tIdx] = arr[aIdx];
        aIdx++;
        tIdx++;
    }
    while (bIdx <= br) {
        temp[tIdx] = arr[bIdx];
        bIdx++;
        tIdx++;
    }

    for (int i = 0; i < size; i++) {
        arr[al + i] = temp[i];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left == right) return;
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, mid + 1, right);
}

int main() {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
}
