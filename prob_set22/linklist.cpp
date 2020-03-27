#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

class List{
    public:
        Node *root;
        int size;
        void show();
        void append(int);
        void insert(int,int);
        void remove(int);
};

void List::show(){
    Node *current = root;
    cout << current-> data << " ";
    while(current->next){
        current = current->next;
        cout << current->data << " ";
    }
}

void List::append(int d){
    Node *n = new Node;
    n->data = d; n->next = NULL;
    if(root == NULL) root = n;
    else{
        Node *current = root;
        while(current->next){
            current = current->next;
        }
        current->next = n;
    }
    size++;
}

int main(){
    List myList = {0,0};
    myList.append(5);
    myList.append(7);
    myList.append(11);
    myList.append(4);
    myList.append(12);
    myList.append(45);
    myList.show(); cout << "\n";

    return 0;
    

}
