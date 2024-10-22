#include<iostream>
using namespace std;

void tukar_nilai(int *a,int *b){

}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<"Nilai seblum Tukar\n";
    cout<<"Nilai a = "<<a<<endl;
    cout<<"Nilai b = "<<b<<endl;
    cout<<"Nilai setelah Tukar\n";
    tukar_nilai(&a,&b);
    cout<<"Nilai a = "<<b<<endl;
    cout<<"Nilai b = "<<a<<endl;
    return 0;
}