#include <iostream>
#include <string>
using namespace std;

struct Kendaraan
{
    string noKendaraan;
    string namaPemilik;
    string asalDaerah;
    string merk;
    int tahunKeluaran;
};

int main()
{
    int N;
    cout << "Masukkan jumlah kendaraan: ";
    cin >> N;

    Kendaraan kendaraan[N];
    int jumlahKendaraan2020KeAtasHonda = 0;

    for (int i = 0; i < N; ++i)
    {
        cout << "Data Kendaraan ke-" << i + 1 << endl;
        cout << "No Kendaraan: ";
        cin >> kendaraan[i].noKendaraan;
        cout << "Nama Pemilik: ";
        cin >> kendaraan[i].namaPemilik;
        cout << "Asal Daerah Pemilik: ";
        cin >> kendaraan[i].asalDaerah;
        cout << "Merk: ";
        cin >> kendaraan[i].merk;
        cout << "Tahun Keluaran: ";
        cin >> kendaraan[i].tahunKeluaran;

        if (kendaraan[i].tahunKeluaran >= 2020 && kendaraan[i].merk == "Honda")
        {
            jumlahKendaraan2020KeAtasHonda++;
        }
    }

    cout << "Data Kendaraan dengan tahun keluaran 2020 ke atas dan merek Honda:" << endl;
    for (int i = 0; i < N; ++i)
    {
        if (kendaraan[i].tahunKeluaran >= 2020 && kendaraan[i].merk == "Honda")
        {
            cout << "No Kendaraan: " << kendaraan[i].noKendaraan << endl;
            cout << "Nama Pemilik: " << kendaraan[i].namaPemilik << endl;
            cout << "Asal Daerah Pemilik: " << kendaraan[i].asalDaerah << endl;
            cout << "Merk: " << kendaraan[i].merk << endl;
            cout << "Tahun Keluaran: " << kendaraan[i].tahunKeluaran << endl;
            cout << endl;
        }
    }

    cout << "Jumlah kendaraan dengan tahun keluaran 2020 ke atas dan merek Honda: " << jumlahKendaraan2020KeAtasHonda << endl;

    return 0;
}
