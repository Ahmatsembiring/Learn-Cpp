#include<iostream>
using namespace std;
void tukar(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y =temp;

}

int main(){
    int x,y;
   cout <<"Nilai A:";
   cin >> x;
   cout <<"Nilai B:";
   cin >> y;
   cout <<"Nilai A sebelum di tukar:"<<x<<endl;
   cout <<"Nilai B sebelum di tukar:"<<y<<endl;
   tukar(&x,&y);
   cout<<"Nilai Y sesudah ditukar"<<x;
   cout<<"Nilai Y sesudah ditukar"<<y ;

}