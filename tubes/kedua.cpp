#include <iostream>
#include <conio.h>
#include <cstring>
#include <ctime>
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
filem *daftar_filem[50];
// Prototipe fungsi
void list_filem();
void beli_tiket();
void delete_riwayat();
void lihat_riwayat();
void search_tiket();

string getHari(int hari)
{
    switch (hari)
    {
    case 0:
        return "Minggu";
    case 1:
        return "Senin";
    case 2:
        return "Selasa";
    case 3:
        return "Rabu";
    case 4:
        return "Kamis";
    case 5:
        return "Jumat";
    case 6:
        return "Sabtu";
    default:
        return "Hari tidak valid";
    }
}

string getHariRekursif(int hari, int i = 0)
{
    if (i == 7)
    {
        return getHari(hari);
    }
    else
    {
        hari = (hari + 1) % 7;
        return getHariRekursif(hari, i + 1);
    }
}

int main()
{
    time_t now = time(0);
    tm *t = localtime(&now);
    int hari = t->tm_wday;
    int masukkan;
    // Tampilkan menu utama
    do
    {
        system("color 0B");
        // system("color")iyalah sebuah untuk warna latar belakang dari
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
        cout << "\t|\tCari Tiket                -> 5.\t|\n";
        cout << "\t|\tKeluar                    -> 6.\t|\n";
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
            search_tiket();
            break;
        case 6:
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
    time_t now = time(0);
    tm *t = localtime(&now);
    int hari = t->tm_wday;
    cout << " |===========================================================================================|\n";
    cout << " |                     Daftar Menu Hari " << getHariRekursif(hari) << "\t\t\t\t\t"
                                                                                   "             |\n";
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
    cout << " | 8  | SDM19          | DARK WEB                | Rp.100.000  | Y5          | 14.35 - 16.35 |\n";
    cout << " |===========================================================================================|\n";
    cout << " \n";
    cout << "Tekan Keyboard Untuk Kembali Ke Main Menu \n";
    getch(); // getch() digunakan untuk membaca satu karakter dari input tanpa menunggu tombol enter.
    // Menunggu user untuk menekan 1 tombol
    system("cls");
}

void beli_tiket()
{
    system("cls");
    time_t now = time(0);
    tm *t = localtime(&now);
    int hari = t->tm_wday;
    cout << " |===========================================================================================|\n";
    cout << " |                     Daftar Menu Hari " << getHariRekursif(hari) << "\t\t\t\t\t"
                                                                                   "             |\n";
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
    cout << " | 8  | SDM19          | DARK WEB                | Rp.100.000  | Y5          | 14.35 - 16.35 |\n";
    cout << " |===========================================================================================|\n";
    cout << " \n";

    filem *FM = new filem; // Variabel Pembantu
    // Meminta input dari pengguna untuk data tiket yang akan dibeli
    cout << "Masukkan ID Tiket        :";
    cin >> FM->id;
    cout << "Masukkan Kode Filem      :";
    cin >> FM->kf;
    cout << "Masukkan Nama Filem      :";
    cin.ignore();
    cin.getline(FM->nf, 50);
    cout << "Masukkan Harga           :";
    cin >> FM->h;
    cout << "Masukkan Studio          :";
    cin >> FM->s;
    cout << "Masukkan Waktu Tayang    :";
    cin.ignore();
    cin.getline(FM->w, 50);

    // Menambahkan data tiket yang baru dibeli ke dalam array daftar_filem
    daftar_filem[jumlah_filem++] = FM;

    cout << "\n\n";
    cout << "Data yang anda masukkan sukses \n";
    cout << "Tekan Keyboard untuk kembali ke Main Menu";
    getch();
}

void delete_riwayat()
{
    system("cls");
    time_t now = time(0);
    tm *t = localtime(&now);
    int hari = t->tm_wday;
    cout << "  |=========================================================================================|\n";
    cout << " |                     Daftar Menu Hari " << getHariRekursif(hari) << "\t\t\t\t\t"
                                                                                   "             |\n";
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
    cout << " | 8  | SDM19          | DARK WEB                | Rp.100.000  | Y5          | 14.35 - 16.35 |\n";
    cout << " |===========================================================================================|\n";
    cout << " \n";
    // LOOPING INI :menampilkan daftar filem (film) yang tersimpan dalam array daftar_filem
    for (int i = 0; i < jumlah_filem; i++)
    {
        cout << " | " << i + 1 << "  | " << daftar_filem[i]->kf << " | " << daftar_filem[i]->nf << " | " << daftar_filem[i]->h << " | " << daftar_filem[i]->s << " | " << daftar_filem[i]->w << " |\n";
    }
    cout << " +-------------------------------------------------------------------------------------------+\n";
    cout << " \n";

    int index;
    cout << "Masukkan nomor riwayat yang ingin dihapus: ";
    cin >> index;

    if (index > 0 && index <= jumlah_filem)
    {
        delete daftar_filem[index - 1];
        for (int i = index - 1; i < jumlah_filem - 1; i++)
        {
            daftar_filem[i] = daftar_filem[i + 1];
        }
        jumlah_filem--;
        cout << "Riwayat berhasil dihapus.\n";
    }
    else
    {
        cout << "Nomor riwayat tidak valid.\n";
    }

    cout << "Tekan Keyboard untuk kembali ke Main Menu";
    getch();
}

void lihat_riwayat()
{
    system("cls");
    time_t now = time(0);
    tm *t = localtime(&now);
    int hari = t->tm_wday;
    cout << " |===========================================================================================|\n";
    cout << " |                     Daftar Menu Hari " << getHariRekursif(hari) << "\t\t\t\t\t"
                                                                                   "             |\n";
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
    cout << " | 8  | SDM19          | DARK WEB                | Rp.100.000  | Y5          | 14.35 - 16.35 |\n";
    cout << " |===========================================================================================|\n";
    cout << " \n";
    for (int i = 0; i < jumlah_filem; i++)
    {
        cout << " | " << i + 1 << "  | " << daftar_filem[i]->kf << " | " << daftar_filem[i]->nf << " | " << daftar_filem[i]->h << " | " << daftar_filem[i]->s << " | " << daftar_filem[i]->w << " |\n";
    }
    cout << " +-------------------------------------------------------------------------------------------+\n";
    cout << " \n";
    cout << "Tekan Keyboard untuk kembali ke Main Menu";
    getch();
}

void search_tiket()
{
    system("cls");
    char id_tiket[10];
    time_t now = time(0);
    tm *t = localtime(&now);
    int hari = t->tm_wday;
    cout << " |===========================================================================================|\n";
    cout << " |                     Daftar Menu Hari " << getHariRekursif(hari) << "\t\t\t\t\t"
                                                                                   "             |\n";
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
    cout << " | 8  | SDM19          | DARK WEB                | Rp.100.000  | Y5          | 14.35 - 16.35 |\n";
    cout << " |===========================================================================================|\n";
    cout << " \n";
    cout << "Masukkan ID Tiket yang ingin dicari: ";
    cin >> id_tiket;

    bool ditemukan = false;
    for (int i = 0; i < jumlah_filem; i++)
    {
        if (strcmp(daftar_filem[i]->id, id_tiket) == 0)
        {
            cout << "Tiket ditemukan:\n";
            cout << "Kode Filem   : " << daftar_filem[i]->kf << "\n";
            cout << "Nama Filem   : " << daftar_filem[i]->nf << "\n";
            cout << "Harga        : " << daftar_filem[i]->h << "\n";
            cout << "Studio       : " << daftar_filem[i]->s << "\n";
            cout << "Waktu Tayang : " << daftar_filem[i]->w << "\n";
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan)
    {
        cout << "Tiket dengan ID " << id_tiket << " tidak ditemukan.\n";
    }

    cout << "Tekan Keyboard untuk kembali ke Main Menu";
    getch();
}
