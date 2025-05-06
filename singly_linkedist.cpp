#include <iostream>
using namespace std;

//Membuat class node
class Node
{
public:
    int noMhs;
    Node *next;
};

class LinkedList
{
    Node *START;

public: 
    LinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nMasukkan Nomor Mahasiswa: ";
        cin >> nim;
    
        Node *nodeBaru = new Node;
        nodeBaru-> noMhs = nim;

        
    }

    bool listEmpty()
    {
        return (START == NULL);
    }

};


