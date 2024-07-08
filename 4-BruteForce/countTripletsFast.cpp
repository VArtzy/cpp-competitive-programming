#include <iostream>
#include <cstring>

using namespace std;

int n;

void sort(int arr[]) {
    for (int i = 0; i < n; i++) {
        int pos = i;
        while (pos > 0 && arr[pos] < arr[pos - 1]) {
            int temp = arr[pos];
            arr[pos] = arr[pos - 1];
            arr[pos - 1] = temp;
            pos--;
        }
    }
}

bool exist(int r, int arr[]) {
    int kiri = 0;
    int kanan = n;

    while (kanan >= kiri) {
        int idx = (kanan + kiri) / 2;
            if (r == arr[idx]) {
                return true;
            } else if (r > arr[idx]) {
                kiri = idx + 1;
            } else {
                kanan = idx - 1;
            }
    }

    return false;
}

int countTripletsFast(int arr[]) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int r = -(arr[i] + arr[j]);
            if (exist(r, arr)) count++;
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
    sort(arr);

    cout << countTripletsFast(arr);
}
