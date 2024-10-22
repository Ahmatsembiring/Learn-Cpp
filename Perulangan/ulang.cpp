#include <iostream>
using namespace std;

int main()
{
    string pilihan;
    do
    {

        int alas, tinggi, hasil;

        cout << "Masukkan Alas segitiga :";
        cin >> alas;
        cout << "Masukkan Tinggi segitiga :";
        cin >> tinggi;

        hasil = alas * tinggi * 0.5;

        cout << "Luas segitiga Adalah :" << hasil << endl;
        cout << "Apakah Anda Ingin Memasukkan Luas Segitiga lain(YA/TIDAK) =";
        cin >> pilihan;
    } while (pilihan == "YA" && pilihan == "TIDAK");
    cout << "Terima Kasih " << endl;
}