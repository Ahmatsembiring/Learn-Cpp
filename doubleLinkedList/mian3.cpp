#include<iostream>
using namespace std;
//struct node
struct Node
{
    int data; //menyimpan nilai
    Node *next; // pointer ke node berikunya
    Node *prev; //pointer ke node sebelumnya

//inisialisai pointer ke null
    Node(int value){
        data = value;
        next = nullptr;
        prev = nullptr;
    }

};

Node* head =nullptr;

void tambahakhir(int nilai){ 
    Node* newNode = new Node(nilai);
    if(head==nullptr){ //ketika list kosong
        head = newNode;//Node baru menjadi head
        return;
    } //jikalist tidak kosong maka iya akan mencari node trakhir
    Node*current=head;
    while(current->next!=nullptr){ //mencari node trakhir
        current=current->next;
    }
    current->next=newNode;//mengubungkan node terkahir dengan node baru
    newNode->prev=current;//mengubungkan node baru dengan node terakhir
}
void deleteNode(int nilai){
    Node*current = head;

    while(current!= nullptr){
        if(current->data == nilai){ //jika data itu ==nilai
        //maka dia akan update ke prev
            if(current->prev != nullptr){
                current->prev->next = current->next;        
    }else{
        head=current->next;
    }
    if(current->next != nullptr){
        current->next->prev = current->prev;
    }
    delete current;
    //cout<<"nilai"<<nilai<<"Berhasil dihapus"<<endl;
    return;
}
current=current->next;
    }
    cout<<"Nilai"<<nilai<<"Tidak ada nilai dlm list"<<endl;
}
void tambahsebelum(int nilaibaru,int nilaitarget){
    Node*newNode=new Node(nilaibaru);

    if(head==nullptr){
        head=newNode;
        cout<<"List kosong,menambahsebagai node pertama."<<endl;
        return;
    }

    Node* current =head;
    while(current!=nullptr){
        if(current->data == nilaitarget){
            newNode->next=current;
            newNode->prev=current->prev;

            if(current->prev !=nullptr){
                current->prev->next=newNode;
            }else{
                head=newNode;
            }

            current->prev=newNode;
            cout << "Nilai " << nilaibaru << " berhasil ditambahkan sebelum " << nilaitarget << endl;
            return;
         }
         current=current->next;
    }
    cout<<"Nilai Target"<<nilaitarget<<"tidak ditemukan  list."<<endl;
}
void tampilanterbalik(){
    if(head==nullptr){
        cout<<"List Kosong"<<endl;
        return;
    }
    Node* current=head;
    while(current->next !=nullptr){
        current=current->next;
    }
    cout<<"List terbalik"<<endl;
    while(current !=nullptr){
        cout<<current->data<<" ";
        current=current->prev;
    }
cout<<endl;
}
void display(){
    Node* current=head;
    while(current!=nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}

int main(){

//tambah nilai
    tambahakhir(1);
    tambahakhir(2);
    tambahakhir(3);
    tambahakhir(4);
    tambahakhir(5);

    display();
    deleteNode(2);
    display();
    tambahsebelum(6,4);
    display();
    tampilanterbalik();



}
