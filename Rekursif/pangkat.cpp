#include <iostream>
#include <cmath>
using namespace std;

// Deklarasi fungsi rekursif untuk menghitung pangkat
int hitungPangkat(int angka, int pangkat)
{
    if (pangkat == 0) 
    {
        return 1;
    }
    else if (pangkat < 0 && pangkat % 2 == 0)
    {
        return pow(angka, -pangkat);
    }
    else if (pangkat < 0 && pangkat % 2 != 0)
    {
        return -pow(angka, -pangkat);
    }
    else
    {
        return angka * hitungPangkat(angka, pangkat - 1);
    }
    cout << pow(angka, pangkat);
}

int main()
{
    int angka, pangkat;

    // Input angka dan pangkat
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << "Masukkan pangkat: ";
    cin >> pangkat;

    // Hitung dan cetak hasil
    cout << "Hasil bilangan berpangkat ";
    for (int i = 1; i <= pangkat; i++)
    {
        cout << angka;
        if (i < pangkat)
            cout << "x";
    }
    cout << " = " << hitungPangkat(angka, pangkat) << endl;

    return 0;
}