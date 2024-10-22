#include<iostream>
using namespace std;

void kuadrat(int *y){
   // cout<<y<<" = Ini adalah alamat dari parameternya."<<y<<endl;
    // cout<<*y<<"  = Ini adalha Nilai dari parameternya."<<*y<<endl;
// *y= refrens 
int hasil;
*y=*y**y;
}

int main(){
    int x = 100;
    (&x);kuadrat : 
    cout<<"Angka :"<<x<<endl;
    kuadrat(&x);
    cout<<"Kuadrat :"<<x<<endl;





}