#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string Nama;
    int NIM;
    string prodi;
};

int main() {
    const int MAX_MAHASISWA = 100; // Batasi jumlah maksimum mahasiswa
    Mahasiswa daftarMahasiswa[MAX_MAHASISWA];

    int jumlahMahasiswa;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    // Input data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "Input Nama mahasiswa " << i + 1 << ": ";
        cin.ignore();
        getline(cin,daftarMahasiswa[i].Nama);
        cout << "Input NIM mahasiswa " << i + 1 << ": ";
        cin >> daftarMahasiswa[i].NIM;
        cout << "Input prodi mahasiswa " << i + 1 << ": ";
        cin.ignore();
        getline(cin,daftarMahasiswa[i].prodi);
    }

    // Mencari mahasiswa berdasarkan Nama
    string namaygdicari;
    cout << "Masukkan Nama mahasiswa yang ingin dicari: ";
    cin >> namaygdicari;

    bool found = false;
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        if (daftarMahasiswa[i].Nama == namaygdicari) {
            found = true;
            cout << "Data mahasiswa ditemukan:" << endl;
            cout << "Nama: " << daftarMahasiswa[i].Nama << endl;
            cout << "NIM: " << daftarMahasiswa[i].NIM << endl;
            cout << "Prodi: " << daftarMahasiswa[i].prodi << endl;
            break;
        }
    }

    if (!found) {
        cout << "Data mahasiswa dengan nama " << namaygdicari << " tidak ditemukan!" << endl;
    }

    return 0;
}
