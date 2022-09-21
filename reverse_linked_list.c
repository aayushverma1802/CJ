#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head;
void reverse(){
    struct Node *prev,*cur,*next;
    prev=NULL;
    cur=next=head;
    while(next!=NULL){
        next=next->next;
        cur->next=prev; 
        prev=cur;
        cur=next;
    }
}
void linkedListTraversal(struct Node *ptr)
{
    while (ptr!= NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
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
    struct Node *prev,*cur,*next;
    prev=NULL;
    cur=next=head;
    while(next!=NULL){
        next=next->next;
        cur->next=prev;
        prev=cur;
        cur=next;
    }
    linkedListTraversal(last);
    return 69;
}