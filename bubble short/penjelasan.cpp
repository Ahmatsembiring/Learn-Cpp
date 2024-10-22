#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
void list_filem();
void beli_tiket();
void edit_riwayat();
void delete_riwayat();
void lihat_riwayat();

struct filem
{
    char kf[10];
    char nf[50];
    char h[50];
    char s[10];
    char w[50];
    char id[10];
};

int jumlah_filem = 0;
char filem[6][50][100];

int main()
{
    int masukkan;
menu:
    system("color 0C");
    cout << "==============================================================\n";
    cout << "\t                     Bioskop Bos Ahmat               \n";
    cout << "==============================================================\n";

    cout << "\t ---------------------Main Menu---------------------\n";
    cout << "\t_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
    cout << "\t|\t\t\t\t\t|\n";
    cout << "\t|\tDaftar Filem              -> 1\t|\n";
    cout << "\t|\tPembelian Tiket           -> 2\t|\n";
    cout << "\t|\tEdit riwayat pembelian    -> 3\t|\n";
    cout << "\t|\tHapus Riwayat             -> 3\t|\n";
    cout << "\t|\tMelihat Riwayat           -> 3\t|\n";
    cout << "\t|\tKeluar                    -> 3\t|\n";
    cout << "\t|\t\t\t\t\t|\n";
    cout << "\t_ _  _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
    cout << "================================================================\n";
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
        edit_riwayat();
        break;
    case 4:
        delete_riwayat();
        break;
    case 5: 
        lihat_riwayat();
        break;
    }
}
void list_filem()
{
    string back;
    system("cls");
    cout << " |=========================================================|\n";
    cout << " |                   Daftar Filem                          |\n";
    cout << " +----+--------------------+---------------+---------------+\n";
    cout << " | No | Nama Filem         | Harga         +  WaktU Tayang |\n";
    cout << " +----+--------------------+---------------+---------------+\n";
    cout << " | 1. | makan ayam         |  Rp.6000000   | 08.56 - 11.45 |\n";
    cout << " | 2. | makan ayam         |  Rp.6000000   | 08.56 - 11.45 |\n";
    cout << " | 3. | makan ayam         |  Rp.6000000   | 08.56 - 11.45 |\n";
    cout << " | 4. | makan ayam         |  Rp.6000000   | 08.56 - 11.45 |\n";
    cout << " | 5. | makan ayam         |  Rp.6000000   | 08.56 - 11.45 |\n";
    cout << " |======================================================== |\n";
    cout << " \n";
    cout << "Tekan Kyboard Untuk Kembali Ke Main Menu \n";
    getch();
    system("cls");
    main();
}
void beli_tiket()
{
    system("cls");
    cout << " |===========================================================================================|\n";
    cout << " |                                    Daftar Menu Hari Ini                                   |\n";
    cout << " +----+----------------+-------------------------+-------------+-------------+---------------+\n";
    cout << " | No | Kode Filem     |  Nama Filem             | Harga       | Studio      | Waktu Tayang  |\n";
    cout << " +----+----------------+-------------------------+-------------+-------------+---------------+\n";
    cout << " | 1  | SDM12          |  UPIN                   | Rp.400.000  | Y1          | 07.35 - 09.55 |\n";
    cout << " | 2  | SDM12          |  UPIN                   | Rp.400.000  | Y1          | 07.35 - 09.55 |\n";
    cout << " | 3  | SDM12          |  UPIN                   | Rp.400.000  | Y1          | 07.35 - 09.55 |\n";
    cout << " | 4  | SDM12          |  UPIN                   | Rp.400.000  | Y1          | 07.35 - 09.35 |\n";
    cout << " | 5  | SDM12          |  UPIN                   | Rp.400.000  | Y1          | 07.35 - 09.34 |\n";
    cout << " |===========================================================================================|\n";
    cout << " \n";
    struct filem FM;
    {
        char ulang;
        cout << " \t Menu Beli Tiket \n\n";
        cout << "Masukkan ID Tiket        :";
        cin >> FM.id;
        cout << "Masukkan Kode Filem      :";
        cin >> FM.kf;
        cout << "Masukkan Nama Filem      :";
        cin >> FM.nf;
        cout << "Masukkan Harga           :";
        cin >> FM.h;
        cout << "Masukkan Studio          :";
        cin >> FM.s;
        cout << "Masukkan Waktu Pembelian :";
        cin >> FM.w;

        cout << "\n\n";
        cout << "nID Tiket        :";
        cout << " \nData yang anda Inputkan :\n";
        cout << " \nKode Filem    :";
        cout << " \nNama Filem    :";
        cout << " \nHarga         :";
        cout << " \nStudio        :";
        cout << " \nWaktu Tayang  :";

        jumlah_filem++;
        strcpy(filem[0][jumlah_filem - 1], FM.id);
        strcpy(filem[1][jumlah_filem - 1], FM.kf);
        strcpy(filem[2][jumlah_filem - 1], FM.nf);
        strcpy(filem[3][jumlah_filem - 1], FM.h);
        strcpy(filem[4][jumlah_filem - 1], FM.s);
        strcpy(filem[5][jumlah_filem - 1], FM.w);

        cout << "\n\nData yang anda masukkan sukses \n";
        while (1)
        {
            cout << "Apakah anda ingin mengulang Inputan Data? (Y/N) : ";
            cin >> ulang;
            if (ulang == 'Y' || ulang == 'y')
            {
                system("cls");
                beli_tiket();
                break;
            }
            else if (ulang == 'N' || ulang == 'n')
            {
                system("cls");
                main();
                break;
            }
            else
            {
                continue;
                cout << "\n";
            }
        }
    }
    void edit_riwayat();
    system("cls");
    char masukkan[10];
    int no_array = -1;
    struct filem FM;
    cout << "\t Menu Edit Riwayat \n\n";
    cout << "Daftar Item : \n";
    cout << "+-----+-------------+-------------+-------------+--------+--------+-----------------+\n";
    cout << "| No  | ID Ticket   + Kode Filem  + Nama Filem  + Harga  +Studio  | Waktu Pembelian |\n";
    cout << "+-----+-------------+-------------+-------------+--------+--------+-----------------+\n";
    for (int i = 0; i < jumlah_filem; i++)
    {
        cout << " " << i + 1 << "       " << filem[0][i] << "        " << filem[1][i] << "     " << filem[2][i] << "      " << filem[3][i] << "      " << filem[4][i] << "    " << filem[5][i] << endl;
    }
    cout << "\n\n";
    cout << "Masukkan E untuk Kembali Ke Menu\n";
    cout << "\n\n\n";
    cout << "Masukkan ID Tiket :";
    cin >> masukkan;

    if (strcmp("E", masukkan) == 0)
    {
        system("cls");
        main();
    }
    else
    {
        for (int i = 0; i < jumlah_filem; i++)
        {
            if (strcmp(filem[0][i], masukkan) == 0)
            {
                no_array = i;
            }
        }
        if (no_array == -1)
        {
            cout << "TIDAK DITEMUKAN Data yang Cocok,Tekan Kembali Untuk Kembali";
            getch();
            system("cls");
            edit_riwayat();
        }
        else
        {
            int hapus = no_array;
            cout << "batasan" << jumlah_filem << "dengan" << no_array << endl;
            for (int i = jumlah_filem; i > no_array; i--)
            {
                strcpy(filem[0][hapus], filem[0][hapus - 1]);
                strcpy(filem[1][hapus], filem[1][hapus - 1]);
                strcpy(filem[2][hapus], filem[2][hapus - 1]);
                strcpy(filem[3][hapus], filem[3][hapus - 1]);
                strcpy(filem[4][hapus], filem[4][hapus - 1]);
                strcpy(filem[5][hapus], filem[5][hapus - 1]);
                hapus++;
            }
            jumlah_filem--;
            cout << "Riwayat Berhasil Di Delete,Tekan Keyboard Untuk Kembali ke Menu";
            getch();

            delete_riwayat();
        }
    }
}
void lihat_riwayat()
{
    system("cls");
    cout << "\tMenu Melihat Riwayat \n \n";
    cout << "Riwayat Penjualan Ticket :\n";
    cout << "+-----+-------------+-------------+-------------+--------+--------+-----------------+\n";
    cout << "| No  | ID Ticket   + Kode Filem  + Nama Filem  + Harga  +Studio  | Waktu Pembelian |\n";
    cout << "+-----+-------------+-------------+-------------+--------+--------+-----------------+\n";
    for (int i = 0; i < jumlah_filem; i++)
    {
        cout << " " << i + 1 << "       " << filem[0][i] << "        " << filem[1][i] << "     " << filem[2][i] << "      " << filem[3][i] << "      " << filem[4][i] << "    " << filem[5][i] << endl;
    }
    cout << "\n";
    cout << "Tekan Keyboard Untuk Kembali  Ke maIN Menu\n";
    getch();
    system("cls");
    main();
}
