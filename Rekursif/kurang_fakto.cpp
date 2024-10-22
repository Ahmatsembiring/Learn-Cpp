#include <iostream>
using namespace std;
int faktorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return n * faktorial(n - 1);
    {
    }
}

int main()
{
    int n, c, pengurangan;
    cout << "Masukkan nilai n : ";
    cin >> n;
    cout << "Masukkan Nilai c : ";
    cin >> c;

    pengurangan = n - c;

    cout << "Hasil pengurangan : " << pengurangan << endl;
    cout << "Faktorial Dari : " << pengurangan << " adalah : " << faktorial(pengurangan) << endl;
}
