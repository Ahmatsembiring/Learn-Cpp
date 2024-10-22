#include <iostream>
using namespace std;
void temp(int *x, int y)
{
    for (int i = 0; i < y; i++) 
    {
        *x = *x * y; /*Mengalikan Nilai yg disimpan dalam alamat memori yang ditunjuk oleh x dengan variabel y dan meyimpan dalam memori yg di tunjuk oleh x */
    }
}
int main()
{
    int a, b;

    cout << "Masukkan nilai ke A: ";
    cin >> a;
    cout << "Masukkan nilai ke B: ";
    cin >> b;

    temp(&a, b);//akan memproses variabel a denggan mengalikan nilainya dengan b sebanyak b kali
    cout <<  a ;
    cout<< b;

    return 0;

    //      Visualisasi dari kodingan ini 
    /* pada kali ini kita akan mengunakan parameter  */




    //akan mengalikan nilai variabel yang ditunjuk oleh x (yaitu a) dengan nilai b sebanyak b kali.
}