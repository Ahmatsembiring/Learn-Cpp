#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cout << "Masukkan Nilai A :";
    cin >> a;
    cout << "Masukkan Nilai B :";
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                cout << "O";
            }
        }
        cout << endl;
    }
}