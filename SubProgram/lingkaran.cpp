#include<iostream>
using namespace std;
int luaslingkaran(float radius){
   float  const pi=3.14;
   return pi*radius*radius;
}
int main(){
    // Penjumlah luas lingkaran

    int radius1,radius2;
    cout<<"Masukkan Luas lingkaran 1 :";
    cin>>radius1;
    cout<<"Masukkan Luas lingkaran 2 :";
    cin>>radius2;
    float luas1=luaslingkaran(radius1);
    float luas2=luaslingkaran(radius2);
    double sum =luas1+luas2;
    cout << "penjumlahan kedua lingkaran adalah: " << sum;
}