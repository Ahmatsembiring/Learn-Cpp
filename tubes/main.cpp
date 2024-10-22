#include <iostream>
#include <string>

using namespace std;

void tampilkanMenuUtama() {
    cout << "=== MENU BIOSKOP ===" << endl;
    cout << "1. Lihat Daftar Menu yang Tersedia" << endl;
    cout << "2. Pesan Menu" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih opsi (1-3): ";
}

void lihatDaftarMenu() {
    cout << "=== DAFTAR MENU ===" << endl;
    cout << "1. Tiket Nonton Horor" << endl;
    cout << "2. Mie Ayam - Rp. 12.000" << endl;
    cout << "3. Soto Ayam - Rp. 20.000" << endl;
    cout << "4. Es Teh - Rp. 5.000" << endl;
}

int main() {
    int pilihan;
       system("color 0B");
    do {
        tampilkanMenuUtama();
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                lihatDaftarMenu();
                break;
            case 2:
                cout << "Menu apa yang ingin Anda pesan? (1-4): ";
                int nomorMenu;
                cin >> nomorMenu;
                switch (nomorMenu) {
                    case 1:
                        cout << "Anda memesan Nasi Goreng. Terima kasih!" << endl;
                        break;
                    case 2:
                        cout << "Anda memesan Mie Ayam. Terima kasih!" << endl;
                        break;
                    case 3:
                        cout << "Anda memesan Soto Ayam. Terima kasih!" << endl;
                        break;
                    case 4:
                        cout << "Anda memesan Es Teh. Terima kasih!" << endl;
                        break;
                    default:
                        cout << "Menu tidak valid." << endl;
                }
                break;
            case 3:
                cout << "Terima kasih telah mengunjungi kami. Sampai jumpa lagi!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih opsi 1-3." << endl;
        }
    } while (pilihan != 3);

    return 0;
}
