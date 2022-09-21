#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *f = NULL;
struct Node *r = NULL;
void enqueue(int data)
{
    struct Node *n=(struct Node  *)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is FUll");
    }
    else{
        n->data=data;
        n->next=NULL;
        if(f=NULL){
            f=r=NULL;
        }
        else{
            r->next=n;
            r=n;
        }
    }
}
int main()
{
    return 69;
}