#include<iostream>
using namespace std;

void double_nilai(int* x,int* y){
    *x = *x * 2;
    *y = *y * 2;

}
int main()
{
    int x,y;
    cout<<"Masukkan Nilai X :";
    cin>>x;
    cout<<"Masukkan Nilai Y :";
    cin>>y;
    cout<<"Nilai sebelum diubah X :"<<x<<endl;
    cout<<"Nilai sebelum diubah Y :"<<y;
   
    double_nilai(&x,&y);
    cout<<"Nilai setelah diubah X :"<<x<<endl;
    cout<<"Nilai setelah diubah Y :"<<y;







}