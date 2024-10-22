//Definisi Pointer
/* Pointer adalah  Variabel yang menyimpan alamat memori dari variabel lain
* dalam pointer

*/
#include <iostream>
using namespace std;

int main()
{
    int x, y; // deklarasi variabel x dan y
    int *z; // mendeklarasikan pointer bertipe int mennerima alamat address
    x = 2;
    y = 4;

    z = &x; // Menyimpan alamat memori dari variabel x ke pointer z merubah value dari alamat variable

    x = x * 2;
    y = *z + 2;
    z = &y;
    *z = x % 2;
    cout << "Nilai X:" << x << endl;
    cout << "Nilai Y :" << y << endl;

    //penjelasan
    /*pada program tersebut akan menghasilkan keluaran X=4  dan Y=0.Mengapa?
pertama  variabel x diinisialisasi dengan nilai 2 dan variabel y diinisialisasi dengan nilai 4. Kemudian, pointer z ditetapkan untuk menunjuk ke alamat variabel x. Dilakukan operasi x = x * 2, yang mengubah nilai x menjadi 4. Selanjutnya, dilakukan operasi y = *z + 2, di mana *z mengacu pada nilai x. Sehingga, nilai y(4+2) menjadi 6. Pointer z kemudian dialihkan untuk menunjuk ke alamat variabel y. sehingga  *z = x % 2, di mana *z mengacu pada nilai y yaitu 4. Hasil dari operasi x % 2 adalah 4 % 2, yang sama dengan 0. Sehingga, nilai y akhirnya menjadi 0. Oleh karena itu, keluaran dari program adalah x = 4 dan y = 0.
*/
}
