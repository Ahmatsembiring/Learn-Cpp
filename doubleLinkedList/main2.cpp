#include <iostream>
using namespace std;
/*
Double linked List adalah Struktur data yang terdiri dari sekumpulan node,dimana setiap node memiliki 2 pointer
satu menunjukkan ke node sebelumya yaitu (prev)
dan satu menunjukkan ke node berikutnya yaitu (next)



*/
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}
Node *deleteFirstNode(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl; // Notify if the list is

        return nullptr; // Return nullptr if the list is empty
    }

    head = head->next;
    if (head != nullptr)
    {
        head->prev = nullptr;
    }
    delete head->prev; // Delete the old head node
    return head;       // Return the new head
}
Node *insertAtBeginning(Node *head, int databaru)
{
    Node *newNode = createNode(databaru); // Buat node baru
    // Jika list kosong, node baru menjadi head
    if (head == nullptr)
    {
        return newNode;
    }
    // Hubungkan node baru dengan head yang ada
    newNode->next = head;
    head->prev = newNode;
    return newNode; // Node baru menjadi head baru
}
Node *deleteLastNode(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;

        return nullptr;
    }
    // If the list has only one node
    if (head->next == nullptr)
    {
        delete head;    // Delete the only node
        return nullptr; // Return nullptr
    }
    // Traverse to the last node
    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next; // Move to the next node
    }
    // Delete the last node
    current->prev->next = nullptr;  // Set the next of the previous
    delete current; // Delete the last node
    return head;                    // Return the head
}
Node *insertAtEnd(Node *head, int databaru)
{
    Node *newNode = createNode(databaru); // Create a new node
    // If the list is empty, the new node becomes the head
    if (head == nullptr)
    {
        return newNode;
    }
    // Traverse to the last node
    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next; // Move to the next node
    }
    // Link the new node with the last node
    current->next = newNode; // Set the next of last node to new node
    newNode->prev = current; // Set the prev of new node to last node
    return head;             // Return the head of the list
}
void displayList(LinkedList &list)
{
    if (list.head == nullptr)
    {
        cout << "List kosong\n";
        return;
    }

    Node *current = list.head;
    cout << "List: ";
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr\n";
}

void clearInputBuffer()
// Membersihkan buffer input (cin) jika terjadi kesalahan input
// Mencegah loop tak terbatas jika pengguna memasukkan input yang salah (misal huruf saat diminta angka)
// misal user menginputkan abd sedangkan yng diminta angka maka ia akan infinite loop
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int getValidIntInput()
// Memastikan input yang diterima adalah angka yang valid
// Mencegah infinite loop program jika pengguna memasukkan input yang salah
{
    int input;
    while (!(cin >> input))
    {
        cout << "Input tidak valid. Masukkan angka: ";
        clearInputBuffer();
    }
    clearInputBuffer();
    return input;
}

void displayMenu()
{
    cout << "\nProgram Linked List\n";
    cout << "1. Tambah node di awal\n";
    cout << "2. Hapus node di awal\n";
    cout << "3. Tambah node di posisi tertentu\n";
    cout << "4. Hapus node di posisi tertentu\n";
    cout << "5. Cari node\n";
    cout << "6. Tampilkan list\n";
    cout << "7. Keluar\n";
    cout << "Pilih menu (1-7): ";
}

void processChoice(LinkedList &list, int choice)
{
    int nilai, posisi;

    if (choice == 1)
    {
        cout << "Masukkan nilai untuk ditambahkan di awal: ";
        nilai = getValidIntInput();
        addNode(list, nilai);
    }
    else if (choice == 2)
    {
        deleteNode(list);
    }
    else if (choice == 3)
    {
        cout << "Masukkan nilai untuk ditambahkan: ";
        nilai = getValidIntInput();
        cout << "Masukkan posisi: ";
        posisi = getValidIntInput();
        insertAtPosition(list, nilai, posisi);
    }
    else if (choice == 4)
    {
        cout << "Masukkan posisi untuk dihapus: ";
        posisi = getValidIntInput();
        hapus_posisi(list, posisi);
    }
    else if (choice == 5)
    {
        cout << "Masukkan nilai yang dicari: ";
        nilai = getValidIntInput();
        searchNode(list, nilai);
    }
    else if (choice == 6)
    {
        displayList(list);
    }
    else if (choice == 7)
    {
        cout << "Program selesai.\n";
        exit(0);
    }
    else
    {
        cout << "Pilihan tidak valid. Silakan coba lagi.\n";
    }
}

int main()
{
    LinkedList list;

    while (true)
    {
        displayMenu();
        int choice = getValidIntInput();
        processChoice(list, choice);
    }

    return 0;
}