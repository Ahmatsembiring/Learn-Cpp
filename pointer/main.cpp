#include <iostream>
using namespace std;
void tukar( int *x,int*y){ // deklarasi sebuah pointer x,y berfungsi untuk menukar
    int temp=*x;//temp adalah variabel sementara yang di inisialisasikan dengan pointer x
    *x =*y; // akan mengubah nilai yg ditujuk oleh *x(a)dan *y(b)


    *y = temp;//mengubah nilai *y dengan variabel sementara (temp )yang berinisialisasi x
}

int main() {
    int a, b;

        cout << "Masukkan nilai ke A: ";
        cin >> a;
        cout << "Masukkan nilai ke B: ";
        cin >> b;

        tukar(&a,&b);
        cout<<"Nilai A :"<< a<<endl;
        cout<<"Nilai B :"<< b<<endl;
        

    return 0;
}
