#include<iostream>

using namespace std;

void fungsi_aneh(int a,int b){

 if(a > b) {
   cout<<"A * B :"<<a*b<<endl;
}else{
    cout<<"A-B :"<<a-b<<endl;
}
}

int main(){
int a,b;

cout<<"Masukkan Nilai A :";
cin>>a;
cout<<"Masukkan Nilai B :";
cin>>b;
fungsi_aneh(a,b);

}