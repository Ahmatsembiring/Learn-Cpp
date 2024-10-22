#include <iostream>
using namespace std;

bool isPrime(int N)
{
    if (N <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;

    do
    {

        cout << "Masukkan sebuah bilangan (untuk keluar masukkan -999): ";
        cin >> N;
        if (N == -999)
        {
            break;
        }

        if (isPrime(N))
        {
            cout << "Bilangan prima" << endl;
        }
        else
        {
            cout << "Bukan bilangan prima" << endl;
        }
    } while (true);

    cout << "Program Selesai." << endl;

    return 0;
}
