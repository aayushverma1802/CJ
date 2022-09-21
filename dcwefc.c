#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void printArr(struct Node *head){
    struct Node *p=head;
    while(p!=NULL){
        p=p->next;
        printf("%d\n",p->data);
    }
}//void fuck()
void can(struct Node* node){
    struct Node * ptr=node->next;
    ptr->data=ptr->next->data;
    ptr->next=ptr->next->next;
    //return ptr;
}
int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *s=(struct Node *)malloc(sizeof(struct Node));
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    struct Node *last=(struct Node *)malloc(sizeof(struct Node));
    head->data=10;
    s->data=11;
    t->data=12;
    last->data=13;
    head->next=s;
    s->next=t;
    t->next=last;
    last->next=NULL;
    can(s);
    printArr(head);
    //linkedListTraversal(head);
    return 69;
}