#include <iostream>
using namespace std;

int main()
{
    const int Max_Mahasiswa = 10;
    char nama[Max_Mahasiswa][10];
    int usia[Max_Mahasiswa];
    float ipk[Max_Mahasiswa];
    char asal_provinsi[Max_Mahasiswa][10];
    char asal_universitas[Max_Mahasiswa][10];

    for (int i = 0; i < Max_Mahasiswa; ++i)
    {
        cout << "Data Mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "Nama: ";
        cin >> nama[i];
        cout << "Usia: ";
        cin >> usia[i];
        cout << "IPK: ";
        cin >> ipk[i];
        cout << "Asal Provinsi: ";
        cin >> asal_provinsi[i];
        cout << "Asal Universitas: ";
        cin >> asal_universitas[i];
        cout << endl;
    }

    int indeks;
    cout << "Masukkan indeks data : ";
    cin >> indeks;

    if (indeks >= 0 && indeks < Max_Mahasiswa)
    {
        cout << "Informasi Mahasiswa pada Indeks " << indeks << ":" << endl;
        cout << "Nama: " << nama[indeks] << endl;
        cout << "Usia: " << usia[indeks] << endl;
        cout << "IPK: " << ipk[indeks] << endl;
        cout << "Asal Provinsi: " << asal_provinsi[indeks] << endl;
        cout << "Asal Universitas: " << asal_universitas[indeks] << endl;
    }
    else
    {
        cout << "Data Tidak Valid" << endl;
    }

    return 0;
}
