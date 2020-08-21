#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Tree{
    public:
    Node *root;
    public:
    Tree(){
        root = nullptr;
    }

    Node* createTree(){
        Node *temp1;
        Node *temp2;
        int val;
        queue <Node *> q;

        cout<<"Enter root data"<<endl;
        cin>>val;
        root = new Node;
        root->data = val;
        root->lchild = nullptr;
        root->rchild = nullptr;
        q.emplace(root);

        while(!q.empty()){
            temp1 = q.front();
            q.pop();

            cout<<"Enter left child data of "<<temp1->data<<endl;
            cin>>val;
            if(val!=-1){
                temp2 = new Node;
                temp2->data = val;
                temp2->lchild = nullptr;
                temp2->rchild = nullptr;
                temp1->lchild = temp2;
                q.emplace(temp2);
            }

            cout<<"Enter right child data of "<<temp1->data<<endl;
            cin>>val;
            if(val!=-1){
                temp2 = new Node;
                temp2->data = val;
                temp2->lchild = nullptr;
                temp2->rchild = nullptr;
                temp1->rchild = temp2;
                q.emplace(temp2);
            }
        }
        return root;
    }

    void preorder(Node *t){
        if(t != NULL){
            cout<<t->data<<endl;
            preorder(t->lchild);
            preorder(t->rchild);
        }
    }

    
};

int main(){

    Tree obj;
    Node *temp;
    temp = obj.createTree();
    obj.preorder(temp);

    return 0;
}