#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void merge_Set(struct Node *f,struct Node *s,int first,int second){
    struct Node *ptr=f;
    struct Node *p=s;
    while(i<first && j<second){
        if 
    }
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *s = (struct Node *)malloc(sizeof(struct Node));
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = (struct Node *)malloc(sizeof(struct Node));
    struct Node *l = (struct Node *)malloc(sizeof(struct Node));
    head->data = 50;
    s->data = 21;
    t->data = 15;
    last->data = 23;
    l->data = 22;
    head->next = s;
    s->next = t;
    t->next = last;
    last->next = l;
    l->next = NULL;

    //New linked list

    struct Node *head_2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *s_2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *t_2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last_2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *l_2 = (struct Node *)malloc(sizeof(struct Node));
    head_2->data = 50;
    s_2->data = 21;
    t_2->data = 15;
    last_2->data = 23;
    l_2->data = 22;
    head_2->next = s;
    s_2->next = t;
    t_2->next = last;
    last_2->next = l;
    l_2->next = NULL;

    linkedListTraversal(head);
    return 69;
}