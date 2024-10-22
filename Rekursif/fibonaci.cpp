#include <iostream>
using namespace std;
int fibonaci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 2;
    }
    else if (n < 1)
    {
        cout << "Tidak terdefinisi";
    }
    else
    {
        return (fibonaci(n - 1)) + (fibonaci(n - 2));
       // return fibonaci(n - 1)+fibonaci(n-2);
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Masukkan Sebuah Angka :";
    cin >> n;

    cout << "fibonaci dari " << n << " adalah  = ";
    cout << fibonaci(n);
    return 0;
}
