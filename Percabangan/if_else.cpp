#include<iostream>
using namespace std;

int main(){


    int n;
    string status;
    cout<<"Masukkan Nilai Ujian Kamu :";
    cin>>n;

    if(n>=90 && n<=85){
        status="Kamu Berhak Mengikuti Ujian";

    }else if(n>89 && n<87){
        status="Kamu Wajib Bayar Mengikuti ujian";
    }else if(n>=88){
        status="Kamu wajib Remedial";

    }else{
        status="Kamu Harus Kelas Pengganti";
 
    }
    cout<<n;
}