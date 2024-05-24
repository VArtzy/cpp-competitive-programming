#include <iostream>

using namespace std;

int n;

void search(int h[], int x) {
    int hasil = -1;
    for (int i = 0; i < n; i++) {
        if (h[i] == x) {
            hasil = i;
            break;
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
    search(h, x);
}
