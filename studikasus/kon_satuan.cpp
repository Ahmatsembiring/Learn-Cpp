#include <iostream>
using namespace std;

int main()
{
    string satuan[] = {"km", "hm", "dam", "m", "dm", "cm", "mm"};
    string awal, akhir;
    int x, y;
    int arr = sizeof(satuan) / sizeof(*satuan);
    cout << "Masukkan satuan awal(km hm dam m dm cm mm ):";
    cin >> awal;
    cout << "Masukkan satuan akhir(km hm dam m dm cm  mm ):";
    cin >> akhir;
    for (int i = 0; i < arr; i++)
    {
        if (awal == satuan[i])
        {
            x = i + 1;
        }
        if (akhir == satuan[i])
        {
            y = i + 1;
        }
    }
    if (x < y)
    {
        cout << "turun(perkalian)";
    }
    else if (x > y)
    {
        cout << "naik(pembagian)";
    }
    else
    {
        cout << "awal = akhir";
    }
}