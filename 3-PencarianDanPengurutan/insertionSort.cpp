#include <iostream>

using namespace std;

int n;

void insertionSort(int arr[]) {
   for (int i = 0; i < n; i++) {
        int pos = i;
        while(pos > 0 && arr[pos] < arr[pos - 1]) {
            int temp = arr[pos];
            arr[pos] = arr[pos - 1];
            arr[pos - 1] = temp;
            pos--;
        }
   } 
}

int main() {
   cin >> n;
   int arr[n];

   for(int i = 0; i < n; i++) {
        cin >> arr[i];
   }

   insertionSort(arr);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
