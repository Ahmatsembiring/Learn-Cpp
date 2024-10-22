// array adalah sebuah variabel yang dapat menampung banyak nilai
// array di cpp didefinisikan dengan menggunakan kurung siku [] 
// contoh array
// int arr[10]  


#include<iostream>
using namespace std;

int main(){
    int arr[10]={23,23,45,45,67,78,78,90,23,45};
    for(int i=0;i<10;i++){
        cout<<i<<"="<<arr[i]<<"\n";
    }
    

}