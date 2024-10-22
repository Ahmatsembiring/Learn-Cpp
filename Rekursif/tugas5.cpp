#include <iostream>
using namespace std;

struct DataTuris
{
    int tahun;
    double jumlahTuris;
    string negaraAsal;
};

DataTuris Data[5];

double maxJumlahTuris(DataTuris *Data, int jangkaWaktu)
{
    double max = Data[0].jumlahTuris;
    for (int i = 1; i < jangkaWaktu; i++)
    {
        if (Data[i].jumlahTuris > max)
        {
            max = Data[i].jumlahTuris;
        }
    }
    return max;
}

void masukkanDataTuris(int index, int tahun)
{
    if (index > 5)
    {
        return;
    }

    double jumlah;
    string negara;
    cout << "Jumlah turis pada tahun " << tahun << " : ";
    cin >> jumlah;
    cout << "Asal negara dengan turis terbanyak tahun " << tahun << " : ";
    cin >> negara;

    Data[index - 1] = {tahun, jumlah, negara};
    masukkanDataTuris(index + 1, tahun + 1);
}

void hitungDataTuris(int jangkaWaktu)
{
    double total = 0;
    for (int i = 0; i < jangkaWaktu; i++)
    {
        total += Data[i].jumlahTuris;
    }
    double rataRata = total / jangkaWaktu;

    cout << "\nRata-rata jumlah turis per tahun : " << rataRata << " Orang" << endl;

    double maxTuris = maxJumlahTuris(Data, jangkaWaktu);

    int index = 3;
    for (int i = jangkaWaktu - 1; i >= 0; i--)
    {
        if (Data[i].jumlahTuris == maxTuris)
        {
            if (index == 3)
            {
                cout << "Asal negara dengan jumlah turis terbanyak ketiga : " << Data[i].negaraAsal << endl;
            }
            index--;
        }
    }
}

int main()
{
    int jangkaWaktu;
    cout << "Masukkan jangka waktu : ";
    cin >> jangkaWaktu;

    masukkanDataTuris(1, 2024);
    hitungDataTuris(jangkaWaktu);

    return 0;
}