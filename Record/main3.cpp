#include <iostream>
#include <string>

using namespace std;

// Deklarasi struct untuk menyimpan data mahasiswa
struct Mahasiswa
{
    string nama;
    int npm;   // Nomor Pokok Mahasiswa
    float ipk; // Indeks Prestasi Kumulatif
};

int main()
{
    // Membuat array dari struct Mahasiswa
    Mahasiswa mhs[3];

    // Input data mahasiswa
    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan nama mahasiswa ke-" << (i + 1) << ": ";
        cin >> mhs[i].nama;
        cout << "Masukkan NPM: ";
        cin >> mhs[i].npm;
        cout << "Masukkan IPK: ";
        cin >> mhs[i].ipk;
        cout << endl;
    }

    // Menampilkan data mahasiswa
    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "NPM: " << mhs[i].npm << endl;
        cout << "IPK: " << mhs[i].ipk << endl;
        cout << "-------------------\n";
    }

    return 0;
}