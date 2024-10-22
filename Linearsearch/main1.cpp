#include <iostream>
using namespace std;
// Dalam definisi Linear Search adlah sebuah algoritma yang digunakan untuk mencari sebuah data dalam sebuah array.

// Bisa dikatakan Linear Search  adalah sebuah teknik pencarian data dengan mencari satu persatu data yang dicari.
//  dan apabila ditemukan kecocokan data yang dicari maka pencarian akan menegmbalikan Output,dan apabila di temukan iya akan berlanjut hingga akhir dari array tersebut.

int main()
{
    string pilihan;
    do{

    
    int angka[] = {5, 8, 8, 12, 15, 20, 20, 20, 25};
    int length = sizeof(angka) / sizeof(*angka);
    int data_cari; 
    int hasil_cari=0;
    cout << "DATA YANG TERSEDIA IYALAH :" << endl;
    for (int i = 0; i < length; i++)
    {
        cout << "Index ke-" << i << " : " << angka[i] << endl;
    }
    cout << "Masukkan Data yang ingin dicari :";
    cin >> data_cari;
    for (int j = 0; j < length; j++)
    {
        if (data_cari == angka[j])
        {
            hasil_cari++;
        }
    }
    if (hasil_cari == 0)
    {
        cout << "Data yang anda cari tidak ditemukan!!" << endl;
        
    }
    else
    {
        cout << "Data " << data_cari << " ditemukan pada :" << endl;
        for (int k = 0; k < length; k++)
        {
            if (data_cari == angka[k])
            {
                cout << "Index ke-" << k << endl;
            }
        }
    }
    cout << "Apakah anda ingin mengulang program? (ya/tidak) : ";
    cin >> pilihan;
    } 
    while(pilihan=="ya"||pilihan=="tidak");
    cout<<"Peroggram Selesai"<<endl;
    return 0;

}