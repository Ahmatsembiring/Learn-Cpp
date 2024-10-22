#include <iostream>
using namespace std;
/*Buatlah sebuah pemrograman yang menerima dua variabel melalui input pengguna. Fungsi ini
akan menerima kedua variabel dan mengubah nilainya menjadi dua kali lipat dari nilai
semula.Gunakan fungsi dengan pass by reference melalui pointer.*/
void nilai(int *x, int *y)
{
    *x = *x * 2;
    *y = *y * 2;
}

int main()
{
    int x, y;
    cout << "Masukkan nilai x: ";
    cin>>x ;
    cout << "Masukkan nilai y: ";
    cin>>y;
    cout << "Nilai x sebelum diubah: ";
    cout<<"Nilai x:"<<x<<endl;
    cout<<"Nilai y:"<<y<<endl;

    nilai(&x, &y);
    cout << "Nilai x setelah diubah: "<< x << endl;
    cout << "Nilai y setelah diubah: "<< y << endl;
    return 0;

}