#include <iostream>
using namespace std;
int f(int n)
{
    if (n == 0)
    {
        return 2;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 1;
    }
    else if (n == 3)
    {
        return 1;
    }
    else
    {
        return f(n - 1) + f(n - 2) * (f(n - 3));
    }
}

int main()
{
    int n;
    cout << "Masukkan Sebuah Angka :";
    cin >> n;

    cout << "faktorial dari " << n << " adalah  = ";
    cout << f(n);
    return 0;

    /*Visualisasi dari sebuah kodingan Diatas adalah seperti berikut */
    /*nilai N=11

    dengan Rumus;
    f(n) = f(n-1) + f(n-2) * (f(n-3))
f(3) = 1
f(2) = 1
f(1) = 1
f(0) = 2

jawab:

    f(11) =f(11- 1) + f(11 - 2) * (f(11 - 3)); =f(10)+f(9)*f(8) =367+81*26=2473
    f(10) =f(10- 1) + f(10 - 2) * (f(10 - 3)); =f(9)+f(8)*f(7) =81+26*11=367
    f(9)    =f(9 - 1) + f(9 - 2) * (f(9 - 3)); =f(8)+f(7)*f(6) =26+11*5=81
    f(8)    =f(8 - 1) + f(8 - 2) * (f(8 - 3)); =f(7)+f(6)*f(5) =11+5*3=26
    f(7)    =f(7 - 1) + f(7 - 2) * (f(7 - 3)); =f(6)+f(5)*f(4) =5+3*2=11
    f(6)    =f(6 - 1) + f(6 - 2) * (f(6 - 3)); =f(5)+f(4)*f(3) =3+2*1=5
    f(5)    =f(5 - 1) + f(5 - 2) * (f(5 - 3)); =f(4)+f(3)*f(2) =2+1*1=3 
    f(4)    =f(4 - 1) + f(4 - 2) * (f(4 - 3)); =f(3)+f(2)*f(1) =1+1*1=2
    f(3)    =1
    f(2)    =1
    f(1)    =1
    f(0)    =2
    */
}
