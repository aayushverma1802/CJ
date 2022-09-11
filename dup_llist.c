#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr){
    while (ptr!= NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void cheems(struct Node *head){
    struct Node *curr=head ;
    while(curr!=NULL){
        struct Node *new=curr->next;
        while(new!=NULL){       
            if(curr->data==new->data){
                printf("Repeated element of the list:- %d\n",curr->data);
                new=new->next->next;
            }
            else{
                new=new->next;
            }
            curr=curr->next;
        }
    //new=new->next;
    }
}
void removeDuplicates(struct Node* start)
{
    struct Node *ptr1, *ptr2, *dup;
    ptr1 = start;
 
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL) {
        ptr2 = ptr1;
 
        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL) {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data) {
                /* sequence of steps is important here */
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                free(dup);
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
 
int main(){
    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *s=(struct Node *)malloc(sizeof(struct Node));
    struct Node *t=(struct Node *)malloc(sizeof(struct Node));
    struct Node *last=(struct Node *)malloc(sizeof(struct Node));
    head->data=15;
    s->data=10;
    t->data=1;
    last->data=140;
    head->next=s;
    s->next=t;
    t->next=last;
    last->next=NULL;
    cheems(head);
    //linkedListTraversal(head);
    return 69;
}
