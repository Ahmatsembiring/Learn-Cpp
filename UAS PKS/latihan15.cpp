#include <iostream>
using namespace std;

int main()
{
    int n, i, sum;
    cin >> n;
    sum = 0;
    i = 1;
    do
    {
        cout << i;
        sum = sum + i;
        i = i + 1;
    } while (i <= n);
    cout << " Jumlah = " << sum;
}