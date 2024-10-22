#include<iostream>
using namespace std;
// subprogram adalah  adalah bagian bagain kecil yang mempermudah seorang programer untuk  tidak mengulang kode beberapa kali di tempat yang berbeda
/* Sub progra, terbagi 2 yaitu:
1.Fungsi adalah 

*/
int luas_persegipanjang(int  panjang,int lebar ){
    return panjang *lebar;
}

int main(){
int panjang,lebar;

cout<<"Masukkkan panjangn :";
cin>>panjang;
cout<<"Masukkkan lebar :";
cin>>lebar;


int luas=luas_persegipanjang(panjang,lebar);
cout<<"Luas persegi panjangnnya adalah :"<<luas;


}