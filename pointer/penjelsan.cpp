#include<iostream>
/*SECARA DEFINISI POINTER ADALAH SEBUAH VARIABEL KHUSU YANG DIGUNKAN UNTUK MENYIMPAN SEBUAH ALAMAT MEMORI YANG MANA POINTER DAPAT MENGAKSES SUATU ALAMAT MEMORY*/
using namespace std;
int main(){

    int angka =10;
    int *ptr;
    ptr=&angka;

    cout<<"Nilai angka : "<<angka<<endl;
    cout<<"Alamat angka yang di simpan: "<<*ptr<<endl;
    cout<<"alamat pointer nya adalah :"<<&angka;
    cout<<"alamat yang disimpanan oleh variabel angka adalah :"<<*ptr<<endl;
    
    
}