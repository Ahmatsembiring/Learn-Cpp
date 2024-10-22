#include <iostream>

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

struct DoubleLinkedList
{
    Node *head;
    Node *tail;

    // create empty list()
    DoubleLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    bool isEmpty()
    {
        return head == nullptr && tail == nullptr;
    };

    // allocation
    Node *createNode(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = nullptr;
        return newNode;
    }

    // dealocation
    void deleteNode(Node *node)
    {
        delete node;
    }

    void insertFirst(int data)
    {
        Node *newNode = createNode(data);
        if (isEmpty())
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // fungsi ini tidak digunakan dalam double linked list
    // hanya sebagai latihan logic
    void insertAfter(Node *prevNode, int data)
    {
        // ilustrasi
        // newNode insertAfter node2
        // |
        // v
        // mula-mula: [node1, node2, node3]
        // |
        // v
        // hasil: [node1, node2, newNode, node3]

        // newNode<-node3
        // newNode->node3
        // prevNode(node2)<-newNode
        // prevNode(node2)->nexNode

        Node *newNode = createNode(data);

        // 1. node3 nilai prev ke newNode
        (prevNode->next)->prev = newNode;

        // 2. berikan new Node nilai next ke node3
        newNode->next = prevNode->next;

        // 3. berikan new Node nilai prev ke node 2
        newNode->prev = prevNode;

        // 4. node2 nilai next ke newNode
        prevNode->next = newNode;
    }

    void insertLast(int data)
    {
        if (isEmpty())
        {
            insertFirst(data);
        }
        else
        {
            Node *newNode = createNode(data);
            newNode->prev = tail;
            tail->next = newNode;

            tail = newNode;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            std::cout << "List is empty!" << std::endl;
        }
        else
        {
            Node *temp = head;
            while (temp != nullptr)
            {
                std::cout << temp->data << " ";
                temp = temp->next;
            }
            std::cout << std::endl;
        }
    }

    void deleteFirst()
    {
        if (!isEmpty())
        {
            Node *temp = head;
            head = head->next;
            head->prev = nullptr;
            deleteNode(temp);
        }
    }

    // fungsi ini tidak digunakan dalam double linked list
    void deleteAfter(Node *prevNode)
    {
        // [1, 2, 3, 4]
        // deleteAfter 2
        // [1, 2, 4]
        // prevNode = 2
        if (prevNode->next != nullptr)
        {
            Node *deletedNode = prevNode->next;

            prevNode->next = deletedNode->next;
            (deletedNode->next)->prev = prevNode;
            deletedNode->next = nullptr;
            deletedNode->prev = nullptr;

            deleteNode(deletedNode);
        }
    }

    void deleteLast()
    {
        if (!isEmpty())
        {
            if (head == tail)
            {
                deleteFirst();
            }
            else
            {
                // [1, 2, 3]
                Node *temp;
                temp = tail;
                tail = tail->prev;
                tail->next = nullptr;
                deleteNode(temp);
            }
        }
    }
};

int main()
{
    DoubleLinkedList list;

    if (list.isEmpty())
    {
        std::cout << "list kosong" << std::endl;
    }
    list.insertFirst(1); // [1]
    list.insertFirst(2); // [2, 1]
    list.insertFirst(3); // [3, 2, 1]
    list.insertLast(4);  // [3, 2, 1, 4]
    list.insertLast(5);  // [3, 2, 1, 4, 5]
    list.display();

    list.deleteFirst(); // [2, 1, 4, 5]
    list.display();
    list.deleteLast(); // [2, 1, 4]
    list.display();

    return 0;
}