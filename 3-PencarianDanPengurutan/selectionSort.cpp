#include <iostream>

using namespace std;

int n;

void selectionSort(int arr[]) {
    for (int i = 0; i < n; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
           if (arr[j] < arr[minIndex]) {
                minIndex = j;
           } 
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
}
