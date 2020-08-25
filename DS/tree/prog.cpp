#include <iostream>
#include <queue>
#include <stack>
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
            cout<<t->data<<" ";
            preorder(t->lchild);
            preorder(t->rchild);
        }
    }

    void iterativePreorder(Node *t){
        stack <Node*> s;
        while(t!=nullptr || !s.empty()){
            if(t){
                cout<<t->data<<" ";
                s.push(t);
                t = t->lchild;
            } else {
                t = s.top();
                s.pop();
                t = t->rchild;
            }
        }
    }

    void iterativeInOrder(Node *t){
        stack <Node*> s;
        while(t!=nullptr || !s.empty()){
            if(t){
                s.push(t);
                t = t->lchild;
            } else {
                t = s.top();
                s.pop();
                cout<<t->data<<" ";
                t = t->rchild;
            }
        }
    }

    void inorder(Node *t){
        if(t != NULL){
            inorder(t->lchild);
            cout<<t->data<<" ";
            inorder(t->rchild);
        }
    }

    void postorder(Node *t){
        if(t != NULL){
            postorder(t->lchild);
            postorder(t->rchild);
            cout<<t->data<<" ";
        }
    }

    void levelorder(Node *t){
        queue <Node *> q;
        cout<<t->data<<" ";
        q.emplace(t);
        Node *temp;
        while(!q.empty()){
            temp = q.front();
            q.pop();
            if(temp->lchild){
                cout<<temp->lchild->data<<" ";
                q.emplace(temp->lchild);
            }
            if(temp->rchild){
                cout<<temp->rchild->data<<" ";
                q.emplace(temp->rchild); 
            }
        }
    }

    int count(Node *p){
        int x=0,y=0;
        if(p){
            x = count(p->lchild);
            y = count(p->rchild);
            return x+y+1;
        }
        return 0;
    }

    
    int sum(Node *p){
        int x=0,y=0;
        if(p){
            x = sum(p->lchild);
            y = sum(p->rchild);
            return x+y+p->data;
        }
        return 0;
    }

    
};

int main(){

    Tree obj;
    Node *temp;
    temp = obj.createTree();
    cout<<"pre-order: ";
    obj.preorder(temp);
    cout<<"\npre-order it: ";
    obj.iterativePreorder(temp);
    cout<<"\nin-order it: ";
    obj.iterativeInOrder(temp);
    cout<<"\nin-order: ";
    obj.inorder(temp);
    cout<<"\npost-order: ";
    obj.postorder(temp);
    cout<<"\nlevel-order: ";
    obj.levelorder(temp);
    cout<<"\nCount:"<<obj.count(temp);
    cout<<"\nSum:"<<obj.sum(temp);


    return 0;
}