#include<iostream>
using namespace std;
int pangkat(int a,int b){
    int hasil=a;
    for(int i=1;i<b;i++){
        hasil=hasil*a;
    }
}


int main(){

int a,b;
cout<<"masukkan angka pertama : ";
cin>>a;
cout<<"masukkan pangkat : ";
cin>>b;
cout<<"hasil dari "<<a<<" pangkat "<<b<<" adalah "<<pangkat(a,b)<<endl;
}
