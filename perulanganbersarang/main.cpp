#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i * j << " ";
            cout << endl;
        }
    }
    return 0;
}