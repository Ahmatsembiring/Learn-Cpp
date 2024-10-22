#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Masukkan Sebuah Bilangan :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n ; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "   0   ::::::::::::::::::::::::::::::::::::::: ";
            }
            else if((i-j)%2!=0)
            cout<<"::::::*:*:*:::::::::";
            {
                cout << "   o  :::::::::::::::::::::::::::::::::::; ";
            }
        }
        cout << endl;
    }
}