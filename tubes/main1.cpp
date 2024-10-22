#include <iostream>
#include <string> // Use std::string for better memory management and string operations
#include <vector> // Use std::vector<std::struct> for better data organization and scalability

using namespace std;

// Structure for movie data
struct Film {
    string kf; // Movie code
    string nf; // Movie name
    string h;  // Price
    string s;  // Studio
    string w;  // Show time
    string id; // Ticket ID
};

// Global variables
int jumlah_film = 0;
vector<Film> daftar_film; // Replace character array with vector of structs

// Function prototypes
void list_film();
void beli_tiket();
void edit_riwayat();
void lihat_riwayat();

int main() {
    int pilihan;

    do {
        system("cls"); // Clear the screen
        cout << "==============================================================\n";
        cout << "\t           Bioskop Bos Ahmat        \n";
        cout << "==============================================================\n";

        cout << "\t ---------------------Main Menu---------------------\n";
        cout << "\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
        cout << "\t|\t\t\t\t\t|\n";
        cout << "\t|\tDaftar Film        -> 1\t|\n";
        cout << "\t|\tPembelian Tiket      -> 2\t|\n";
        cout << "\t|\tEdit riwayat pembelian  -> 3\t|\n";
        cout << "\t|\tHapus Riwayat       -> 4\t|\n";
        cout << "\t|\tMelihat Riwayat      -> 5\t|\n";
        cout << "\t|\tKeluar          -> 6\t|\n";
        cout << "\t|\t\t\t\t\t|\n";
        cout << "\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n";
        cout << "================================================================\n";
        cout << "\tMasukkan Nomer Main Menu :";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                list_film();
                break;
            case 2:
                beli_tiket();
                break;
            case 3:
                edit_riwayat();
                break;
            case 4:
                lihat_riwayat(); // Implement this function
                break;
            case 5:
                cout << "Terima kasih, sampai jumpa!\n";
                exit(0);
            default:
                cout << "Masukan tidak valid. Silakan masukkan nomor menu yang benar.\n";
        }
    } while (true);
}

void list_film() {
    system("cls");
    cout << " |=========================================================|\n";
    cout << " |          Daftar Film              |\n";
    cout << " +----+--------------------+---------------+---------------+\n";
    cout << " | No | Nama Film     | Harga     | Waktu Tayang |\n";
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
    cout << " +----+--------------------+---------------+---------------+\n";

    // Display the movie list
    for (int i = 0; i < jumlah_film; ++i) {
        cout << " | " << i + 1 << " | " << daftar_film[i].nf << " | " << daftar_film[i].h << " | " << daftar_film[i].w << " |\n";
    }

    cout << " \n";
    cout << "Tekan Keyboard Untuk Kembali Ke Main Menu \n";
    
}

void beli_tiket() {
    system("cls");

    // Input movie purchase data
    Film FM;
    cout << "Masukkan ID Tiket    :";
    cin >> FM.id;
    cout << "Masukkan Kode Film    :";
    cin >> FM.kf;
    cout << "Masukkan Nama Film    :";
    cin.ignore();
}

void edit_riwayat() {
    system("cls");

    // Display the list of purchase records
    cout << "\t Menu Edit Riwayat \n\n";
    cout << "Daftar Item : \n";
    cout << "+-----+-------------+-------------+-------------+--------+--------+-----------------+\n";
    cout << "| No | ID Ticket  | Kode Film  | Nama Film  | Harga | Studio | Waktu Tayang  |\n";
    cout << "+-----+-------------+-------------+-------------+--------+--------+-----------------+\n";
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
    for (int i = 0; i < jumlah_film; i++) {
        cout << " " << i + 1 << "    " << daftar_film[i].id << "    " << daftar_film[i].kf << "   " << daftar_film[i].nf << "   " << daftar_film[i].h << "   " << daftar_film[i].s << "  " << daftar_film[i].w << endl;
    }

    // Prompt for the ID ticket to edit
    string id_tiket_edit;
    cout << "\nMasukkan ID Tiket yang ingin diedit: ";
    cin >> id_tiket_edit;

    // Find the matching entry in daftar_film
    bool found = false;
    for (int i = 0; i < jumlah_film; i++) {
        if (daftar_film[i].id == id_tiket_edit) {
            found = true;
            // Update the entry with new data (implement this logic)
            // ...
            break;
        }
    }

    if (!found) {
        cout << "ID Tiket tidak ditemukan.\n";
    } else {
        cout << "Data berhasil diubah.\n";
    }

    cout << "\nTekan Keyboard untuk kembali ke Main Menu";
    
}

void lihat_riwayat() {
    system("cls");

    // Check if there are any purchase records
    if (jumlah_film == 0) {
        cout << "Belum ada riwayat pembelian.\n";
}

}