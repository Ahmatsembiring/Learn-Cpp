#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string jenisKelamin;
    float ipk;
};

void Urutan(Mahasiswa *mhs, int n)
{
    for (int i = 1; i < n; i++)
    {
        Mahasiswa terbesar = mhs[i];
        int j = i - 1;
        while (j >= 0 && mhs[j].ipk < terbesar.ipk)
        {
            mhs[j + 1] = mhs[j];
            j--;
        }
        mhs[j + 1] = terbesar;
    }
}

void tampilkanData(Mahasiswa arr[], int n)
{
    cout << "\n               DATA MAHASISWA                   \n";
    cout << "====================================================" << endl;
    cout << "NAMA \t\t JENIS KELAMIN \t IPK\t" << endl;
    cout << "====================================================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nama << "\t" << arr[i].jenisKelamin << "\t" << arr[i].ipk << endl;
    }

    cout << "====================================================" << endl;
}

int main()
{
    const int MAX_MAHASISWA_RA = 100;
    Mahasiswa daftarMahasiswa[MAX_MAHASISWA_RA];
    int jumlahMahasiswa = 0;

    while (jumlahMahasiswa < MAX_MAHASISWA_RA)
    {
        Mahasiswa mhs;

        cout << "\nMasukkan nama mahasiswa (atau '0' untuk berhenti): ";
        getline(cin, mhs.nama);

        if (mhs.nama == "0")
        {
            break;
        }

        cout << "Masukkan jenis kelamin: ";
        getline(cin, mhs.jenisKelamin);

        cout << "Masukkan IPK: ";
        cin >> mhs.ipk;

        cin.ignore();

        daftarMahasiswa[jumlahMahasiswa] = mhs;
        jumlahMahasiswa++;

        Urutan(daftarMahasiswa, jumlahMahasiswa);
        tampilkanData(daftarMahasiswa, jumlahMahasiswa);
    }

    cout << "\nProgram selesai.\n";

    return 0;
}
