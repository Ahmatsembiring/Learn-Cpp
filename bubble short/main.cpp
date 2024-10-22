#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int* nilai1, *nilai2;
    int temp, count = 0;

    for(nilai1 = arr; nilai1 < arr + n - 1; nilai1++) {
        for(nilai2 = arr; nilai2 < arr + n - 1 - (nilai1 - arr); nilai2++) {
            if(*(nilai2) > *(nilai2 + 1)) {
                temp = *(nilai2);
                *(nilai2) = *(nilai2 + 1);
                *(nilai2 + 1) = temp;
                count++;
            }
        }
    }
    cout << "Jumlah langkah yang diperlukan: " << count << endl;
}

int main() {
    int n, i;
    cout << "Masukkan panjang array: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan elemen-elemen array:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array sebelum diurutkan: ";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    bubbleSort(arr, n);
    cout << "Array setelah diurutkan: ";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

