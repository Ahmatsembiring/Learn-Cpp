#include <iostream>
#include <stack>
//stack adalah 

using namespace std;

int main()
{
    stack<int> myStack;

    // Menambahkan elemen ke stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Isi stack: ";
    // Menampilkan elemen di stack
    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop(); // Menghapus elemen dari stack
    }
    cout << endl;

    return 0;
}
