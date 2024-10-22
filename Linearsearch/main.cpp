#include <iostream>
using namespace std;

int main()
{
    // Dalam definisi Linear Search adlah sebuah algoritma yang digunakan untuk mencari sebuah data dalam sebuah array.

    // Bisa dikatakan Linear Search  adalah sebuah teknik pencarian data dengan mencari satu persatu data yang dicari.
    //  dan apabila ditemukan kecocokan data yang dicari maka pencarian akan menegmbalikan Output,dan apabila di temukan iya akan berlanjut hingga akhir dari array tersebut.
    int arr[] = {70, 50, 60, 40, 20, 10, 34, 56};
    int n = sizeof(arr) / sizeof(int);
    int index = -1;
    int cari = 10;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == cari)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << cari << " data tidak ditemukan" << endl;
    }
    else
    {
        cout << cari << " ditemukan pada index ke-" << index << endl;
    }
}