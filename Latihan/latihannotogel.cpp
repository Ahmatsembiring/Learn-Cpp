#include<iostream>
using namespace std;

int main(){
    char cari_nomor;
    while(true){
        cout << "\nSilah kilik Y untuk mencari angka togel dan N untuk berhenti =";
        cin >> cari_nomor;

        if(cari_nomor =='Y'){
            cout<< 1 + (rand() % 6) <<endl;

        }else if( cari_nomor == 'N'){
            cout<<"Selmat no yang anda cari sudah dapat yaitu"<<cari_nomor<<" :";
        }
    }
    cin.get();
    return 0;
}