#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node * insertatbeg(struct node *head){
    struct node *new=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    new->data=100;
    new->prev=NULL;
    new->next=head;
    head->prev=new;
    return new;
}
struct node *insertatend(struct node *head){
    struct node *p, *new;
    p=head;
    new=(struct node *)malloc(sizeof(struct node));
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=new;
    new->data=100;
    new->prev=p;
    new->next=NULL;
    return head;

}
struct node * insertatindex(struct node *head, int index){
    int i=0;
    struct node new=(struct node )malloc(sizeof(struct node));
    struct node*p=head;
    while(i<index-1){
        p=p->next;
        i++;
    }
    struct node *q=p->next;
    new->data=1000;
    new->prev=p;
    new->next=q;
    q->prev=new;
    p->next=new;
    return head;
}
void traversal(struct node *head){
    if(head==NULL){
        return;
    }
    printf("%d ", head->data);
    traversal(head->next);
}
void main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    struct node *sec=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *fourth=(struct node *)malloc(sizeof(struct node));

    head->data=1;
    head->prev=NULL;
    head->next=sec;

    sec->data=2;
    sec->prev=head;
    sec->next=third;

    third->data=3;
    third->prev=sec;
    third->next=fourth;

    fourth->data=4;
    fourth->prev=third;
    fourth->next=NULL;
    printf("YOUR LINKED LIST IS \n");
    traversal(head);
    printf("\n");
    printf("Insertion at beginning\n");
    head=insertatbeg(head);
   
    traversal(head);
    printf("\nInsert at end\n");
    head=insertatend(head);
    traversal(head);
    printf("\nInsert at index\n");
    head=insertatindex(head,2);
    traversal(head);
    printf("\n");

    
}