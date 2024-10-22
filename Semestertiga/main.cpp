#include <iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int> angka(8);
    int total = 0;
    cout << "Masukkan sebuah angka sebanyak 20  :"<<endl;
    for (int i = 0; i < 8; i++)
    {
        cin >> angka[i];
        total += angka[i];
    }
   double rata_rata=static_cast<double>(total)/angka.size();
   cout<<"Rata rata dari 20 bilangan adalah :"<<rata_rata<<endl;
}