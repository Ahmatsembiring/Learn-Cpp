#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    do {
        cout << "Masukkan nilai ke A: ";
        cin >> a;
        cout << "Masukkan nilai ke B: ";
        cin >> b;
        cout << "Masukkan nilai ke C: ";
        cin >> c;

        if (a == b || a == c || b == c) {
        }
    } while (a == b || a == c || b == c);

    cout << a << ", " << b << ", " << c << endl;

    return 0;
}
