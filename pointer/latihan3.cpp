#include<iostream>
#include<cmath>
#define PI 3.14 // preprocessor directive untuk mendefinisikan konstanta PI sebagai 3.14, yang merupakan nilai perkiraan dari π (pi).
using namespace std;

void nilai(int *y){
    cout<<"Alamat parameter :"<<y<<endl; //menampilakan alamt memori y yang akan dikirim ke variabel r
    cout<<"Nilai  parameter :"<<*y<<endl;
}
void luaslingkaran ( int *r){ //mengehitung luas lingkaran
    *r = PI * pow(*r,2);//mengakses nilai dari pointer r  dan mengitung luas lingkaran
}

int main(){
    int r; 
    cout<<"Masukkkan jari jari lingkaran :";
    cin>>r;
    
    nilai(&r);// memnagggil fungsi nilai 
    luaslingkaran(&r); //fungsi luas lingkaran 
    cout<<"Luas lingkaran :"<<r<<endl; // menampilkan jari jari
    return 0;


}