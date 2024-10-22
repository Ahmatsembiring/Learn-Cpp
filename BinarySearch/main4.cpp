#include <iostream>
using namespace std;


void printBerat(double berat) {
    int beratKoma = static_cast<int>(berat * 10) % 10;
    cout << static_cast<int>(berat) << "." << beratKoma;
}

double* binarySearchLele(double arr[], int n, double beratDicari) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == beratDicari) {
            return &arr[mid];
        } else if (arr[mid] < beratDicari) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return nullptr;
}

int main() {
    int jumlahLele;
    cout << "Masukkan jumlah ikan lele: ";
    cin >> jumlahLele;

    double *beratLele = new double[jumlahLele];

    for (int i = 0; i < jumlahLele; ++i) {
        cout << "Berat ikan lele ke " << i + 1 << "(kg): ";
        cin >> beratLele[i];
    }

    double beratDicari;
    cout << "Masukkan berat lele yang ingin dicari (dalam kg): ";
    cin >> beratDicari;

    double* hasilPencarian = binarySearchLele(beratLele, jumlahLele, beratDicari);
    if (hasilPencarian != nullptr) {
        cout << "Lele dengan berat ";
        printBerat(*hasilPencarian);
        cout << " kg ada di kumpulan data!\n";
    } else {
        cout << "Lele dengan berat ";
        printBerat(beratDicari);
        cout << " kg tidak ada di kumpulan data!\n";
    }

    delete[] beratLele;

    return 0;
}

