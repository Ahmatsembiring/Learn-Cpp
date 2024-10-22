#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Rumah
{
    string nama;
    int kamartidur;
    int kamarmandi;
    bool tingkat;
};

bool cek_tingkat(const Rumah &rumah)
{
    return rumah.tingkat;
}
bool cek_kamartidur(const Rumah &rumah)
{
    return rumah.kamartidur > 3;
}

bool cek_kamarmandi(const Rumah &rumah)
{
    return rumah.kamarmandi > 2;
}

bool cek_nama(const Rumah &rumah)
{
    char huruf_pertama = rumah.nama[0];
    return huruf_pertama == 'J' || huruf_pertama == 'K' || huruf_pertama == 'E' || huruf_pertama == 'P';
}

void print_rumah(const vector<Rumah> &rumah_list, const string &judul)
{
    cout << judul << " :\n";
    for (const auto &rumah : rumah_list)
    {
        cout << rumah.nama << "\n";
    }
    cout << "\n";
}

int main()
{
    int N;
    cout << "Masukkan jumlah rumah : ";
    cin >> N;

    vector<Rumah> rumah_list(N);
    for (int i = 0; i < N; ++i)
    {
        cout << "Masukkan nama rumah " << i + 1 << " : ";
        cin >> rumah_list[i].nama;
        cout << "Masukkan jumlah kamar tidur : ";
        cin >> rumah_list[i].kamartidur;
        cout << "Masukkan jumlah kamar mandi : ";
        cin >> rumah_list[i].kamarmandi;
        cout << "Apakah rumah memiliki lantai tingkat (1 = ya, 0 = tidak) : ";
        cin >> rumah_list[i].tingkat;
    }

    vector<Rumah> rumah_tingkat;
    vector<Rumah> rumah_nama_j;

    for (const auto &rumah : rumah_list)
    {
        if (cek_tingkat(rumah))
        {
            rumah_tingkat.push_back(rumah);
        }
        if (cek_nama(rumah))
        {
            rumah_nama_j.push_back(rumah);
        }
    }

    print_rumah(rumah_tingkat, "Rumah yang memiliki lantai tingkat dan jumlah kamar tidur lebih dari 3");
    print_rumah(rumah_nama_j, "Rumah yang namanya mulai dari huruf J, K, E, atau P dan jumlah kamar mandi lebih dari 2");

    return 0;
}