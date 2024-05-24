#include <iostream>

using namespace std;

int n;

void bubbleSort(int arr[]) {
   for (int i = 0; i < n - 1; i++) {
       for (int j = 0; j < n - i - 1; j++) {
           if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
           }
       }
   } 
}

int main() {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; 
    }
}
