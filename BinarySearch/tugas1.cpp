#include <iostream>
using namespace std;

int main()
{

    int arr[] = {23, 18, 29, 36, 44, 53, 64, 63, 4, 5, 6, 8, 9, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    int data_cari, hasil_cari = 0;
    for (int i = 0; i < length; i++)
    {
        cout << "Indeks ke-" << i << ":" << arr[i] << endl;
    }
    cout << "Masukkan Data Yang Ingin dicari :";
    cin >> data_cari;
    for (int j = 0; j < length; j++)
    {
        if (data_cari == arr[j])
        {
            hasil_cari++;
        
        }
        if (hasil_cari == 0)
        {
            cout << "Data Tidak Ditemukan" << endl;
        }
        else
        {
            cout << "Data " << data_cari << "Ditemukan Pada :" << endl;
            for (int k = 0; k < length; k++)
            {
                if (data_cari == arr[k])
                {
                    cout << "Index ke-" << k << endl;
                }
            }
        }
    }}

