#include <iostream>
using namespace std;

int main()
{

  int arr[] = {2, 6, 4, 6, 3, 9, 7};
  int N = sizeof(arr) / sizeof(arr[0]);
  cout << "Angka Seblum DI urutkan :";

  for (int i = 0; i < N; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // proses Shorting nilai
  for (int i = 0; i < N; i++)
  { // loop sebagia proses penukaran pertahap.
    for (int j = 0; j < N; j++)
    { // Loop sebagai pembangding nilai pada data
      if (arr[j] > arr[j + 1])
      {                    // ketika nilai indeks arr lebih bsear daripada nilai arr selnjutanya
        int temp = arr[j]; // variabel temp untuk menampung nilai arr
        arr[j] = arr[j + 1];
      }
    }
  }