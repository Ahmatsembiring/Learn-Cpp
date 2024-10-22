#include<iostream>
using namespace std;
void tukar_nilai(int *x,int *y){
    int temp;
    temp = *x;
    *x =*y;
    *y=temp;

}

int main(){

    int a,b;
   // int tukar_nilai;
    cout<<"Masukkan nilai A :";
    cin>>a;
    cout<<"Masukkan nilai B :";
    cin>>b;

    tukar_nilai(&a,&b);

    cout<<"nilai setelah ditukar "<<endl;
   // tukar_nilai = a == b || b == a;

    cout << "a  :" << a<< endl;
    cout << "b  :" << b;
    return 0;
}