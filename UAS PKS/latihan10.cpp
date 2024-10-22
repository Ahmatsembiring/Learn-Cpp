#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    do
    {
        if (n % 2 == 0)
        {
            cout << n << " Adalah Bilangan Genap";
        }
        else
        {
            cout << n << " Adalah Bilangan Ganjil";
        }
        cout << "\nMasukkan Bilangan : ";
        cin >> n;
    } while (n != -999);
}
