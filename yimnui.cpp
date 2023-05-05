#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    //Node*prev=NULL;
    int data;
    Node *next;
    Node *left;
    Node *right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
  Node *prev=NULL;
    bool isBST(Node* root) 
    {
        // Your code here
            if(root!=NULL){
                //Node *prev=NULL;
                if(!isBST(root->left)){
                    return false;
                }
                if(prev!=NULL and prev->data>=root->data ){
                    return false ;
                }
                prev=root;
                return isBST(root->right);
            }
            return true;
        }
};
int main(){
    Node *obj;
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    bool ans=obj->isBST(root);
    if(ans){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    cout<<"Executional Flow done\n";
    return 69;
}