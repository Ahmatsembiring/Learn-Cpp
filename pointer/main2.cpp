#include<iostream>
using namespace std;
 int sdd(int *x,int *y){
    return *x + *y;
 }
int main(){
    int bil1,bil2;

    cout<<"Masukkan Bilangan 1 :";
    cin>>bil1;
    cout<<"Masukkan Bilangan 2 :";
    cin>>bil2;


    cout<< sdd(&bil1,&bil2);//menyimpan alamat memori dari varibel bil1 dan bil2 yang akan di inisialisasi
    cout<<bil1;
    cout<<bil2;
    return 0;
    /*                     VISUALISASINYA                    */

    /*POINTER  ADALAH SEBUAH VARIABEL YANG MENYIMPAN ALAT MEMORI DARI VARIABEL LAIN
      SEHINGGA DALAM KASUSU INI BISA SAYA JABARKAN BAHWA POINTER DI ATAS MEMILIKI NILAI KEMBALIAN YAITU 
      RETURN *X +*Y SEHINGGA HASILNYA KETIKA KITA INISIALISASI DENGAN BIL1=15 DAN BIL2=20 MAKA 
      HASIL DARI sdd=(int *x +*y)*=15+20=35.san juga nilai bil1=15 && dan bil2=20 sehingga penyelesaian  dari kasusu ini yaitu bernilai =351520
      35 =sdd(*x +*y)
      15 =bil1
      20=bil2 
      */

}