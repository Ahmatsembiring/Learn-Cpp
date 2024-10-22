#include <iostream>
using namespace std;

struct Data
{
    string nama, nim, alamat;
    int umur;
};
int main()
{

    int N;
    cout << "Masukkan Jumlah Siswa :";
    cin >> N;
    Data data[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Siswa  Ke-" << i + 1 << ":" << endl;
        cout << "Nama :";
        cin.ignore();
        getline(cin, data[i].nama);
        cout << "NIM :";
        cin >> data[i].nim;
        cout << "Alamat :";
        cin.ignore();
        getline(cin, data[i].alamat);
        cout << "Umur :";
        cin >> data[i].umur;
    }
    for (int i = 0; i < N; i++)
    {
        cout << "*==========================*" << endl;
        cout << "Nama :" << data[i].nama << endl;
        cout << "NIM :" << data[i].nim << endl;
        cout << "Alamat :" << data[i].alamat << endl;
        cout << "Umur :" << data[i].umur << endl;
    }
}