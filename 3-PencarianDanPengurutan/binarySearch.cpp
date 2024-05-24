#include <iostream>

using namespace std;

int n;

void binarySearch(int h[], int x) {
    int hasil = -1;
    int kiri = 0;
    int kanan = n - 1;

    while(kiri <= kanan && hasil == -1) {
        int tengah = (kiri + kanan) / 2;
        if (x < h[tengah]) {
            kanan = tengah - 1;
        } else if (x > h[tengah]) {
            kiri = tengah + 1;
        } else {
            hasil = tengah;
        }
    }

    if (hasil == -1) {
        cout << "Beri hadiah lain"; 
    } else {
        cout << hasil; 
    }
}

int main() {
    int x;
    cin >> n;
    cin >> x;
    int h[n];
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    binarySearch(h, x);
}
