#include <iostream>
#include <limits>

using namespace std;
// Menampikan Nilai Dari setiap Murid untuk kedua Mata Pelajaran
void tampilkanNilaiMurid(int *nilai[], int jumlahMurid) 
{
    cout << "\nNilai dari setiap murid untuk kedua mata pelajaran:\n";
    for (int i = 0; i < jumlahMurid; ++i)
    {
        cout << "Murid " << i + 1 << ": " << nilai[i][0] << " " << nilai[i][1] << endl;
    }
}
// Akan Menampilkan Menu pada Program
void tampilkanMenu()
{
    cout << "\nMenu:\n";
    cout << "1. Tampilkan nilai dari setiap murid untuk kedua mata pelajaran.\n";
    cout << "2. Tampilkan rata-rata nilai untuk setiap mata pelajaran.\n";
    cout << "3. Tampilkan nilai tertinggi dan terendah dari setiap mata pelajaran.\n";
    cout << "4. Tampilkan jumlah total nilai dari setiap mata pelajaran.\n";
    cout << "5. Keluar\n";
}
// menampilakn Pesan Ketika Program di masukkan oleh siuser
void keluarProgram()
{
    cout << "Terima kasih Untuk Kamu yang Tersayang. Sampai jumpa!\n";
}
//Mengitung rata rata dari nilai yang di masukkan
double hitungRataRata(int *nilai, int jumlah)
{
    double total = 0;
    for (int i = 0; i < jumlah; ++i)
    {
        total += nilai[i];
    }
    return total / jumlah;
}
//Mencari Nilai Tertinggi dari Inputan Yang dimasukkan User
int cariNilaiTertinggi(int *nilai, int jumlah)
{
    int maks = numeric_limits<int>::min();
    for (int i = 0; i < jumlah; ++i)
    {
        if (nilai[i] > maks)
        {
            maks = nilai[i];
        }
    }
    return maks;
}
//Mencari Nilai Terendah dari Inputan Yang dimasukkan User
int cariNilaiTerendah(int *nilai, int jumlah)
{
    int min = numeric_limits<int>::max();
    for (int i = 0; i < jumlah; ++i)
    {
        if (nilai[i] < min)
        {
            min = nilai[i];
        }
    }
    return min;
}
//Mengitung Nilai keseluruhan yang dimasukkan Oleh seorang user
int hitungTotal(int *nilai, int jumlah)
{
    int total = 0;
    for (int i = 0; i < jumlah; ++i)
    {
        total += nilai[i];
    }
    return total;
}

int main()
{
    int jumlahMurid;
    cout << "Masukkan jumlah murid: ";
    cin >> jumlahMurid;

    int **nilai; // Array pointer untuk menyimpan nilai mata pelajaran

    // Alokasi memori untuk array pointer
    nilai = new int *[jumlahMurid];
    for (int i = 0; i < jumlahMurid; ++i)
    {
        nilai[i] = new int[2]; // Alokasi memori untuk menyimpan dua nilai mata pelajaran
    }
// Meminta input nilai mata pelajaran dari user
    for (int i = 0; i < jumlahMurid; ++i)
    {
        cout << "Masukkan nilai mata pelajaran untuk murid " << i + 1 << ": ";
        cin >> nilai[i][0] >> nilai[i][1];
    }

    int pilihan;
    //Menampikan Menu Utama dan Meminta pengguna untuk memilih menu
    //Proggram akan terus berjalan sampai pengguna memilih menu keluar
    do
    {
        tampilkanMenu();
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            tampilkanNilaiMurid(nilai, jumlahMurid);
            break;
        case 2:
        {
            double total1 = 0, total2 = 0;
            for (int i = 0; i < jumlahMurid; ++i)
            {
                total1 += nilai[i][0];
                total2 += nilai[i][1];
            }
            cout << "\nRata-rata nilai untuk mata pelajaran 1: " << total1 / jumlahMurid << endl;
            cout << "Rata-rata nilai untuk mata pelajaran 2: " << total2 / jumlahMurid << endl;
            break;
        }
        case 3:
        {
            int nilai1[jumlahMurid], nilai2[jumlahMurid];
            for (int i = 0; i < jumlahMurid; ++i)
            {
                nilai1[i] = nilai[i][0];
                nilai2[i] = nilai[i][1];
            }
            cout << "\nNilai tertinggi untuk mata pelajaran 1: " << cariNilaiTertinggi(nilai1, jumlahMurid) << endl;
            cout << "Nilai terendah untuk mata pelajaran 1: " << cariNilaiTerendah(nilai1, jumlahMurid) << endl;
            cout << "Nilai tertinggi untuk mata pelajaran 2: " << cariNilaiTertinggi(nilai2, jumlahMurid) << endl;
            cout << "Nilai terendah untuk mata pelajaran 2: " << cariNilaiTerendah(nilai2, jumlahMurid) << endl;
            break;
        }
        case 4:
        {
            int total1 = 0, total2 = 0;
            for (int i = 0; i < jumlahMurid; ++i)
            {
                total1 += nilai[i][0];
                total2 += nilai[i][1];
            }
            cout << "\nJumlah total nilai untuk mata pelajaran 1: " << total1 << endl;
            cout << "Jumlah total nilai untuk mata pelajaran 2: " << total2 << endl;
            break;
        }
        case 5:
            keluarProgram();
            break;
        default:
            cout << "Pilihan tidak valid. Silakan pilih kembali.\n";
            break;
        }
    } while (pilihan != 5);

    // Hapus memori yang dialokasikan untuk array pointer
    for (int i = 0; i < jumlahMurid; ++i)
    {
        delete[] nilai[i];
    }
    delete[] nilai;

    return 0;
}
