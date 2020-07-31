#include <iostream>

using namespace std;

class Node{
    public:
        int val;
        Node *next;
};

class Sll{
    public:
        Node *head;
        Node *tail;
        int length;
    
    Sll(){
        head = NULL;
        tail = NULL;
        length = 0;
    }

    void push(int val){
        Node* newNode = new Node;
        newNode->val = val;
        if(!head){
            head = newNode;
            newNode->next = NULL;
        }
        length++;
    }

    void print(){
        int i = 0;
        cout<<head->val;
    }

};

int main(){
    
}