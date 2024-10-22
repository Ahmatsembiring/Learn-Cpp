#include<iostream>
using namespace std;

int main(){
    string arr[7];
    cout<<"Masukkan Nama Mahasiswa "<<endl;
    for(int i=0;i<7;i++){
        cout<<"Nama Ke-"<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"tampikan";
    for(int i=0;i<7;i++){
        cout<<"Nama Ke-"<<i+1<<" :"<<arr[i]<<endl;
    }
}