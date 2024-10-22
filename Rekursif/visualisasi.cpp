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
   
    cout<<"faktorial dari "<<n<<" adalah  = ";
    cout<<deret(n);
    return 0;


    /*
f(n) = f(n - 1) + 6 - f(n - 2)
f(2) = 3
f(1) = 7
f(0) = 10
Buat sebuah visualisasi jika n = 7.

f(7)= f(7 - 1) + 6 - f(6 - 2) =f(6) +6 -f(5)
f(6)= f(6 - 1) + 6 - f(5 - 2) =f(6) +6 -f(5)
f(5)= f(5 - 1) + 6 - f(4 - 2) =f(4) +6 -f(5)
f(4)= f(4 - 1) + 6 - f(3 - 2) =f(3) +6 -f(4)
f(3)= f(3 - 1) + 6 - f(2 - 2) =f(2) +6 -f(4)
f(2)= 3
f(1)= 7
f(0)= 10



    */
}



