#include<iostream>
using namespace std;

void duakali(int *x,int*y){
    *x = *x * 2; // nilai  yang disimpan di alamat memori x akan  kali dua dari nilai sebelumnya.
    *y = *y * 2; // nilai  yang disimpan di alamat memori y akan  kali dua dari nilai sebelumnya.
}

int main(){

int x,y;
cout<<"Masukkan Nilai X:";
cin>>x;
cout<<"Masukkan Nilai Y:";
cin>>y;
cout<<"Nilai X Sebelum Di Kalikan 2 : "<<x<<endl;
cout<<"Nilai Y Sebelum Di Kalikan 2 : "<<y<<endl;
duakali(&x,&y);//memberikan alamat memori dari variabel x san y
cout<<"=========="<<endl;
cout<<"Nilai X Setelah Di Kalikan 2 : "<<x<<endl;
cout<<"Nilai Y Setelah Di Kalikan 2 : "<<y<<endl;
}