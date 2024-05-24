#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector<int> findDivisibleSubsequence(int arr[], int n) {
    int sum[n];
    sum[0] = 0;
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + arr[i - 1];
    }

    int seenInIndex[n];
    memset(seenInIndex, -1, sizeof(seenInIndex));

    for (int i = 0; i < n; i++) {
        if (seenInIndex[sum[i] % n] == -1) {
            seenInIndex[sum[i] % n] = i;
        } else {
            int a = seenInIndex[sum[i] % n];
            int b = i - 1;
            vector<int> divSub;
            for (int j = a; j <= b; j++) {
                divSub.push_back(j);
            }
            return divSub;
        }
    }

    return {};
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> divSub = findDivisibleSubsequence(arr, n);
    for (int i = 0; i < divSub.size(); i++) {
       cout << divSub[i] << endl; 
    }
}
