#include <iostream>
#include <cstring>

using namespace std;

int n;
int process;
const int MAX_VALUE = 100000;

void countingSort(int arr[]) {
    int frequent[MAX_VALUE];
    memset(frequent, 0, sizeof(frequent));
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        frequent[x] = frequent[x] + 1;
    }

    int idx = 0;
    for (int i = 0; i < MAX_VALUE; i++) {
        for (int j = 0; j < frequent[i]; j++) {
            arr[idx] = i;
            idx++;
            process++;
        }
    }
}

int main() {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countingSort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << process;
}
