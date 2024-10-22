#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node *prev;
    Node *next;
};

struct DoubleLinkedList
{
    Node *head; //head adalah 
    Node *tail;

    DoubleLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void append(char data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void display()
    {
        Node *current = head;
        while (current)
        {
            cout << current->data;
            current = current->next;
        }
        cout << endl;
    }

    void encrypt(char key)
    {
        // Step 1: Move last 3 nodes to the front
        for (int i = 0; i < 3; i++)
        {
            Node *temp = tail;
            tail = tail->prev;
            if (tail)
                tail->next = nullptr;

            temp->next = head;
            head->prev = temp;
            head = temp;
            head->prev = nullptr;
        }

        // Step 2: Insert key after the 3rd node from the new head
        Node *current = head;
        for (int i = 0; i < 2; i++)
        {
            current = current->next;
        }

        Node *newNode = new Node();
        newNode->data = key;
        newNode->next = current->next;
        if (current->next)
        {
            current->next->prev = newNode;
        }
        newNode->prev = current;
        current->next = newNode;
    }

    void decrypt()
    {
        // Step 1: Hapus the key ('X')
        Node *current = head;
        for (int i = 0; i < 3; i++)
        {
            current = current->next;
        }

        Node *keyNode = current->next;
        current->next = keyNode->next;
        if (keyNode->next)
        {
            keyNode->next->prev = current;
        }
        delete keyNode;

        // Step 2: Move the first 3 nodes (which were moved to the front) back to the end
        for (int i = 0; i < 3; i++)
        {
            Node *temp = head;
            head = head->next;
            if (head)
                head->prev = nullptr;

            tail->next = temp;
            temp->prev = tail;
            temp->next = nullptr;
            tail = temp;
        }

        // Set the new tail and ensure the list is circular properly
        tail->next = nullptr;
    }
};

int main()
{
    // Password yang diberikan
    char password[] = {'t', 'P', 'P', 'A', 't', 'b', 'o', '\0'};
    DoubleLinkedList dll;

    // Menambahkan tiap karakter password ke dalam Double Linked List
    for (int i = 0; password[i] != '\0'; i++)
    {
        dll.append(password[i]);
    }

    // Menampilkan password asli
    cout << "Original Password: ";
    dll.display();

    // Mengenkripsi password dengan karakter '@'
    dll.encrypt('X');
    cout << "Encrypted Password: ";
    dll.display();

    // Mendekripsi password
    dll.decrypt();
    cout << "Decrypted Password: ";
    dll.display();

    return 0;
}
