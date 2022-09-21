#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr!= NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void check_loop(struct Node *head){
    struct Node *c=head;
    struct Node *h=head;
    while(h!=NULL){
        c=c->next;
        h=h->next->next;
        if(c==h){
            printf("Matched");
            return;

        }
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
    check_loop(head);
    //linkedListTraversal(head);
    return 69;
}