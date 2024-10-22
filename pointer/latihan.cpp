#include<iostream>
using namespace std;
void  ganda(int &x,int &y,int &z){
    x *=2;
    y *=2;
    z *=2;
}

int main(){
    int x,y,z;
    cout<<"inisialisasi nilai "<<endl;
    cout<<"Masukkan Nila x :";
    cin>>x;
    cout<<"Masukkan Nila Y:";
    cin>>y;
    cout<<"Masukkan Nila Z:";
    cin>>z;
    cout<<"penggandaan nilai "<<endl;
    ganda(x,y,z);
    cout<<"Nilai x :"<<x <<endl;
    cout<<"Nilai y :"<<y<<endl;
    cout<<"Nilai z :"<<z;


   

}