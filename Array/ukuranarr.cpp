#include<iostream>

using namespace std;

int main(){
    int  angka [8]={1,2,3,4,5,6,7,8,};
    cout<<sizeof(angka)<<endl;
/* Mengapa hasil arr = 32 ?
 karena sizeof() iyalah operator mengembalikan ukuran suatu tipe dalam bytes .
 yang mana dalam Int berukuran 4 bytes.


                 ADA JUGA 
                 int myNumbers[5] = {10, 20, 30, 40, 50};
                 for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++) {
                 cout << myNumbers[i] << "\n";
                 }
 */

}