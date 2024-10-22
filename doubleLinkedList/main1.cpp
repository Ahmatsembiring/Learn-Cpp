#include<iostream>
using namespace std;
/* 
Double linked List adalah Struktur data yang terdiri dari sekumpulan node,dimana setiap node memiliki 2 pointer
satu menunjukkan ke node sebelumya yaitu (prev)
dan satu menunjukkan ke node berikutnya yaitu (next)



*/
struct Node{
    int data;
    Node*next;
    Node*prev;
};
Node*createNode(int data){
    Node*newNode = new Node();
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

int main(){


}