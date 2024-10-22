#include <iostream>
using namespace std;

void reverseString(char *str)
{
    char *start = str;
    char *end = str;

    // Menggerakkan pointer 'end' ke akhir string
    while (*end)
    {
        end++;
    }
    end--; // Menghindari karakter null

    // Membalikkan string menggunakan pointer
    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char input[100];

    cout << "Masukkan sebuah string: ";
    cin.getline(input, 100);

    reverseString(input);

    cout << "String yang telah dibalik: " << input << endl;

    return 0;
}