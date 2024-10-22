#include <iostream>
using namespace std;

void tambah(int *a, int *b);
void kurang(int *a, int *b);
void kali(int *a, int *b);
void bagi(int *a, int *b);
void modulo(int *a, int *b);
void pangkat(int *a, int *b);
void nilai_terkecil(int *a, int *b);
void nilai_terbesar(int *a, int *b);

int main() {
    int angka1, angka2;
    char opsi;

    cout << "Masukkan dua angka: ";
    cin >> angka1 >> angka2;

    cout << "Pilih operasi (t/k/m/b/o/p/min/max): ";
    cin >> opsi;

    switch (opsi) {
        case 't':
            tambah(&angka1, &angka2);
            break;
        case 'k':
            kurang(&angka1, &angka2);
            break;
        case 'm':
            kali(&angka1, &angka2);
            break;
        case 'b':
            bagi(&angka1, &angka2);
            break;
        case 'o':
            modulo(&angka1, &angka2);
            break;
        case 'p':
            pangkat(&angka1, &angka2);
            break;
        case 'w':
            nilai_terkecil(&angka1, &angka2);
            break;
        case 'q':
            nilai_terbesar(&angka1, &angka2);
            break;
        default:
            cout << "Operasi tidak valid!" << endl;
            break;
    }

    return 0;
}

void tambah(int *a, int *b) {
    cout << "Hasil penjumlahan: " << *a + *b << endl;
}

void kurang(int *a, int *b) {
    cout << "Hasil pengurangan: " << *a - *b << endl;
}

void kali(int *a, int *b) {
    cout << "Hasil perkalian: " << *a * *b << endl;
}

void bagi(int *a, int *b) {
    if (*b != 0)
        cout << "Hasil pembagian: " << *a / *b << endl;
    else
        cout << "Error: Tidak dapat melakukan pembagian dengan nol." << endl;
}

void modulo(int *a, int *b) {
    cout << "Hasil modulo: " << *a % *b << endl;
}

void pangkat(int *a, int *b) {
    int hasil = 1;
    for (int i = 0; i < *b; ++i) {
        hasil *= *a;
    }
    cout << "Hasil pangkat: " << hasil << endl;
}

void nilai_terkecil(int *a, int *b) {
    cout << "Nilai terkecil: " << (*a < *b ? *a : *b) << endl;
}

void nilai_terbesar(int *a, int *b) {
    cout << "Nilai terbesar: " << (*a > *b ? *a : *b) << endl;
}