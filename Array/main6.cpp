#include<iostream>
using namespace std;

int main(){

    int  nilai_mahasiswa=20;

    int arr[nilai_mahasiswa];
    for(int i=0;i<20;i++){
        cout<<"Nilai ke-"<<i+1<<":";
        cin>>arr[i];
    }
    int MAX=0;
    for(int i=0 ;i<20;i++){
        if(arr[i]>MAX){
            MAX=arr[i];
            }
    }
    cout<<"Nilai Mahasiswa: ";
    for(int i=0;i<20;i++){
        cout<<arr[i]<<" ";
        }
}