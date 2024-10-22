#include <iostream>
using namespace std;
  int deret (int n){
    if (n==0){
        return 10;
    }else if(n==1){
        return 7;
    }else if(n==2){
        return 3;
    }else{
          return deret(n-1)+6-deret(n-2);
    }
}


int main()
{
    int n;
    cout<<"Masukkan Sebuah Angka :";
    cin>>n;    
    cout<<"faktorial dari"<<n<<"adalah";
    cout<<deret(n);
    return 0;
}



