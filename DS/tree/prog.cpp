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
    private:
    Node *root;
    public:
    Tree(){
        root = nullptr;
    }

    void createTree(){
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

            cout<<"Enter left child data"<<endl;
            cin>>val;
            if(val!=-1){
                temp2 = new Node;
                temp2->data = val;
                temp2->lchild = nullptr;
                temp2->rchild = nullptr;
                temp1->lchild = temp2;
                q.emplace(temp2);
            }

            cout<<"Enter right child data"<<endl;
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
    }
};

int main(){

    Tree obj;
    obj.createTree();


    return 0;
}