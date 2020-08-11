#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class SinglyLinkedList{
    private:
        Node *first,*last;
    
    public:

        SinglyLinkedList(){
            first = NULL;
            last = NULL;
        }

        SinglyLinkedList(int a[], int n){
            Node *temp;
            int i;

            first = new Node;
            first->data = a[0];
            first->next = NULL;
            last = first;

            for(i=1;i<n;i++){
               temp = new Node;
               temp->data = a[i];
               temp->next = NULL;
               last->next = temp;
               last = temp;
            }
            //cout<<last->data<<endl;
        }

        void display(){
            Node *p = first;
            while(p){
                cout<<p->data<<endl;
                p = p->next;
            }
        }

        int length(){
            if(!first) {return 0;}
            Node *temp = first;
            int l = 0;
            while(temp){    
                l++;
                temp = temp->next;
            }
            return l;
        }

        void push(int val){
            Node *temp = new Node;
            temp->data = val;
            if(!first){
                first = temp;
                temp->next = NULL;
                last = temp;
            } else {
                last->next = temp;
                last = temp;
                temp->next = NULL;
            }
            //cout<<last->data<<"2"<<endl;
        }

        void pop(){
            if(!first) {return;}
            //int l = length();
            Node *temp = first;
            Node *newLast;
            while(temp->next){
                newLast = temp;
                temp = temp->next;
            }
            last = newLast;
            last->next = NULL;
            int l = length();
            if(l==0){
                first = NULL;
                last = NULL;
            }
        }

        Node* get(int index){
            int l = length();
            if(index<0 || index>l){return last->next;}

            int i = 0;
            Node *temp = first;
            while(i<index){
                temp = temp->next;
                i++;
            }
            return temp;
        }

        int set(int val, int index){
            int l = length();
            if(index<0 || index>l){return -1;}

            if(index == l){
                push(val);
                return 1;
            }

            Node *current = get(index-1);
            Node *temp;
            Node *newNode;
            newNode->data = val;
            temp = current->next;
            current->next = newNode;
            newNode->next = temp;
            return l++;
        }
};

int main(){
    int a[] = {1,2,3,5,6,7,8};
    SinglyLinkedList sll(a,7);
    // sll.push(99);
    // sll.push(88);
    //sll.display();
    //sll.pop();
    cout<<sll.set(4,7)<<endl;
    sll.display();
    //cout<<sll.length();
    //cout<<sll.get(3)<<endl;
    //cout<<sll.get(454);

    return 0;
}