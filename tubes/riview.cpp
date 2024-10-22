#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

// Struktur untuk data filem
struct filem
{
    char kf[10]; // Kode Filem
    char nf[50]; // Nama Filem
    char h[50];  // Harga
    char s[10];  // Studio
    char w[50];  // Waktu Tayang
    char id[10]; // ID Tiket
};

// Deklarasi variabel global
int jumlah_filem = 0;
filem daftar_filem[50];

// Prototipe fungsi
void list_filem();
void beli_tiket();
//void edit_riwayat();
void delete_riwayat();
void lihat_riwayat();

int main()
{
    int masukkan;
    // Tampilkan menu utama
    do
    {
        system("color 0A");
        cout << "==============================================================\n";
        cout << "\t           ||  BIOSKOP BOS AHMAT  ||                        \n";
        cout << "==============================================================\n";
       
        cout << "-------------------------Main Menu----------------------------\n";
        cout << "\t_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  _  _ _ _\n";
        cout << "\t|\t\t\t\t\t|\n";
        cout << "\t|\tDaftar Filem              -> 1.\t|\n";
        cout << "\t|\tPembelian Tiket           -> 2.\t|\n";
        cout << "\t|\tHapus Riwayat             -> 3.\t|\n";
        cout << "\t|\tLihat Riwayat             -> 4.\t|\n";
        cout << "\t|\tKeluar                    -> 5.\t|\n";
        cout << "\t|\t\t\t\t\t|\n";
        cout << "\t_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
        cout << "==============================================================\n";
        cout << "\tMasukkan Nomer Main Menu  :";
        cin >> masukkan;
        switch (masukkan)
        {
        case 1:
            list_filem();
            break;
        case 2:
            beli_tiket();
            break;
        
        case 3:
            delete_riwayat();
            break;
        case 4:
            lihat_riwayat();
            break;
        case 5:
            cout << "Terima kasih, sampai jumpa!\n";
            exit(0);
            break;
        default:
            cout << "Masukan yang anda buat tidak valid. Silakan masukkan nomor menu yang benar.\n";
            break;
        }
    } while (true);
}

void list_filem()
{
    system("cls");
   cout << " |============================================================================================|\n";
    cout << " |                                    Daftar Menu Hari Ini                                   |\n";
    cout << " +----+----------------+-------------------------+-------------+-------------+---------------+\n";
    cout << " | ID | Kode Filem     |  Nama Filem             | Harga       | Studio      | Waktu Tayang  |\n";
    cout << " +----+----------------+-------------------------+-------------+-------------+---------------+\n";
    cout << " | 1  | SDM12          | THE GODFATHER (1972)    | Rp.40.000   | Y1          | 07.35 - 08.35 |\n";
    cout << " | 2  | SDM13          | DILAN(1990)             | Rp.60.000   | Y2          | 09.00 - 10.00 |\n";
    cout << " | 3  | SDM14          | GATOT KACA              | Rp.70.000   | Y3          | 10.05 - 11.05 |\n";
    cout << " | 4  | SDM15          | SANG PEMIMPI            | Rp.45.000   | Y4          | 11.10 - 12.10 |\n";
    cout << " | 5  | SDM16          | FINDING NEMO            | Rp.80.000   | Y5          | 14.35 - 16.35 |\n";
    cout << " | 6  | SDM17          | SANG MAVIA              | Rp.100.000  | Y3          | 13.05 - 14.05 |\n";
    cout << " | 7  | SDM18          | JANDA ANAK 3            | Rp.400.000  | Y4          | 11.10 - 12.10 |\n";
    cout << " | 7  | SDM19          | DARK WEB                | Rp.100.000  | Y5          | 14.35 - 16.35 |\n";
    cout << " |===========================================================================================|\n";
    cout << " \n";
    cout << "Tekan Kyboard Untuk Kembali Ke Main Menu \n";
    getch();
    system("cls");
    main();
    for (int i = 1; i < jumlah_filem; ++i)
    {
        cout << " | " << i + 1 << ". | " << daftar_filem[i].nf << " | " << daftar_filem[i].h << " | " << daftar_filem[i].w << " |\n";
    }
    cout << " |======================================================== |\n";
    cout << " \n";
    cout << "Tekan Kyboard Untuk Kembali Ke Main Menu \n";
    getch();
}

void beli_tiket()
{
    system("cls");
    cout << " |===========================================================================================|\n";
    cout << " |                                    Daftar Menu Hari Ini                                   |\n";
    cout << " +----+----------------+-------------------------+-------------+-------------+---------------+\n";
    cout << " | ID | Kode Filem     |  Nama Filem             | Harga       | Studio      | Waktu Tayang  |\n";
    cout << " +----+----------------+-------------------------+-------------+-------------+---------------+\n";
    cout << " | 1  | SDM12          | THE GODFATHER (1972)    | Rp.40.000   | Y1          | 07.35 - 08.35 |\n";
    cout << " | 2  | SDM13          | DILAN(1990)             | Rp.60.000   | Y2          | 09.00 - 10.00 |\n";
    cout << " | 3  | SDM14          | GATOT KACA              | Rp.70.000   | Y3          | 10.05 - 11.05 |\n";
    cout << " | 4  | SDM15          | SANG PEMIMPI            | Rp.45.000   | Y4          | 11.10 - 12.10 |\n";
    cout << " | 5  | SDM16          | FINDING NEMO            | Rp.80.000   | Y5          | 14.35 - 16.35 |\n";
    cout << " | 6  | SDM17          | SANG MAVIA              | Rp.100.000  | Y3          | 13.05 - 14.05 |\n";
    cout << " | 7  | SDM18          | JANDA ANAK 3            | Rp.400.000  | Y4          | 11.10 - 12.10 |\n";
    cout << " | 7  | SDM19          | DARK WEB                | Rp.100.000  | Y5          | 14.35 - 16.35 |\n";
    cout << " |===========================================================================================|\n";
    cout << " \n";
    // Tampilkan daftar filem yang tersedia
    // Input data pembelian tiket
    filem FM;
    cout << "Masukkan ID Tiket        :";
    cin >> FM.id;
    cout << "Masukkan Kode Filem      :";
    cin >> FM.kf;
    cout << "Masukkan Nama Filem      :";
    cin.ignore();
    cin.getline(FM.nf, 50);
    cout << "Masukkan Harga           :";
    cin >> FM.h;
    cout << "Masukkan Studio          :";
    cin >> FM.s;
    cout << "Masukka Waktu Tayang :";
    cin.ignore();
    cin.getline(FM.w, 50);

    // Tambahkan data pembelian ke dalam array daftar_filem

    daftar_filem[jumlah_filem++] = FM;

    cout << "\n\n";
    cout << "Data yang anda masukkan sukses \n";
    cout << "Tekan Keyboard untuk kembali ke Main Menu";
    getch();
}

//void edit_riwayat()
//{
  
    // Isi fungsi edit_riwayat()
    // Fungsi ini akan digunakan untuk mengedit riwayat pembelian tiket
    // Anda bisa menambahkan logika sesuai kebutuhan Anda
//}

void delete_riwayat()
{
    system("cls");
    cout << " |===========================================================================================|\n";
    cout << " |                                    Daftar Menu Hari Ini                                   |\n";
    cout << " +----+----------------+-------------------------+-------------+-------------+---------------+\n";
    cout << " | ID | Kode Filem     |  Nama Filem             | Harga       | Studio      | Waktu Tayang  |\n";
    cout << " +----+----------------+-------------------------+-------------+-------------+---------------+\n";
    cout << " | 1  | SDM12          | THE GODFATHER (1972)    | Rp.40.000   | Y1          | 07.35 - 08.35 |\n";
    cout << " | 2  | SDM13          | DILAN(1990)             | Rp.60.000   | Y2          | 09.00 - 10.00 |\n";
    cout << " | 3  | SDM14          | GATOT KACA              | Rp.70.000   | Y3          | 10.05 - 11.05 |\n";
    cout << " | 4  | SDM15          | SANG PEMIMPI            | Rp.45.000   | Y4          | 11.10 - 12.10 |\n";
    cout << " | 5  | SDM16          | FINDING NEMO            | Rp.80.000   | Y5          | 14.35 - 16.35 |\n";
    cout << " | 6  | SDM17          | SANG MAVIA              | Rp.100.000  | Y3          | 13.05 - 14.05 |\n";
    cout << " | 7  | SDM18          | JANDA ANAK 3            | Rp.400.000  | Y4          | 11.10 - 12.10 |\n";
    cout << " | 7  | SDM19          | DARK WEB                | Rp.100.000  | Y5          | 14.35 - 16.35 |\n";
    cout << " |===========================================================================================|\n";
    cout << " \n";
    for (int i = 0; i < jumlah_filem; i++) {
        cout << " | " << i + 1 << "  | " << daftar_filem[i].kf << " | " << daftar_filem[i].nf << " | " << daftar_filem[i].h << " | " << daftar_filem[i].s << " | " << daftar_filem[i].w << " |\n";
    }
    cout << " |===========================================================================================|\n";
    cout << " \n";

    char id_tiket[10];
    cout << "Masukkan ID Tiket yang ingin dihapus: ";
    cin >> id_tiket;

    int index = -1;
    for (int i = 0; i < jumlah_filem; i++) {
        if (strcmp(daftar_filem[i].id, id_tiket) == 0) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        for (int i = index; i < jumlah_filem - 1; i++) {
            daftar_filem[i] = daftar_filem[i + 1];
        }
        jumlah_filem--;
        cout << "Data berhasil dihapus.\n";
    } else {
        cout << "ID Tiket tidak ditemukan.\n";
    }

    cout << "Tekan Keyboard untuk kembali ke Main Menu";
    getch();
}


void lihat_riwayat()
{
      for (int i = 0; i <= jumlah_filem; i++)
    {
        cout << " | " << i + 1 << "  | " << daftar_filem[i].kf << " | " << daftar_filem[i].nf << " | " << daftar_filem[i].h << " | " << daftar_filem[i].s << " | " << daftar_filem[i].w << " |\n";
    }
        cout << " |===========================================================================================|\n";
  
}