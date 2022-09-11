#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
int main(){
    //Making of the root node;
    struct Node *p;
    p=(struct Node*)malloc(sizeof(struct Node));
    p->left=NULL;
    p->right=NULL;
    //Making of the 2rd node;
    struct Node *p1=(struct Node*)malloc(sizeof(struct Node));
    p1->left=NULL;
    p1->right=NULL;
    //Making of the 3rd node;
    struct Node *p2=(struct Node *)malloc(sizeof(struct Node));
    p2->left=NULL;
    p2->right=NULL;
    //Linking the nodes;
    p->left=p1;
    p->right=p2;
    return 0;

}