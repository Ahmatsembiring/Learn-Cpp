#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, c;
    cout << "Masukkan Angka Awal Perkalian (batas 10) : ";
    cin >> n;

    if (n < 1 || n > 10)
    {
        cout << "Masukkan Angka Awal Antara 1 samapi 10. ";
        return 1;
    }
    cout << "Masukkan Angka Akhir Perkalian (batas 10) : ";
    cin >> c;
    if (c < 1 || c > 10)
    {
        cout << "Masukkan Angka Akhir Antara 1 samapi 10. ";
        return 1;
    }

    cout << "==========================================" << endl;
    cout << "Perkalian " << n << " Sampai " << c << " adalah" << endl;
    for (int j = 1; j <= 10; j++)
    {
        for (int i = n; i <= c; i++)
        {
            cout << setw(5) << i << " x " << j << "=" << setw(5) << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
