// Nama :Ahmat Prayoga sembiring
// Nim :12340053
// RA
/* Pointer adalah  Variabel yang menyimpan alamat memori dari variabel lain
notasi * dalam pointer bermakna bawasanya akan mengakses variabel yang ditunjukkan oleh pointer
sedangkan notasi & ini bermakna Menyimpan alamat memori dari sebuah variabel misalnya
z = &x; -> Menyimpan alamat memori dari variabel x ke pointer z


*/

#include <iostream>
using namespace std;
int rekursif(int nilai)
{
    if (nilai == 0)
    {
        return 2;
    }
    else if (nilai >= 1 && nilai <= 3)
    {
        return 1;
    }
    //rekurens
    else
    {
        return rekursif(nilai - 1) + rekursif(nilai - 2) * rekursif(nilai - 3);
    }
}
int main()
{

    int nilai;
    cout << "Masukkan sebuah angka :";
    cin >> nilai;
    // validasi input
    if (nilai < 0)
    {
        cout << "Masukkan Nilai yang lebih besar atau sama dengan 0" << endl;
        return 1; // akan mengembalikan menjadi 1 ketika terjadi kesalahan dalam kondisi
    }
    cout << "Hasil rekursif :" << rekursif(nilai) << endl;
}