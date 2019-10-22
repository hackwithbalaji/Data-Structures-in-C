#include<stdio.h>
 struct node
 {
     int data;
     struct node* next;
 };
 void insert(int val,struct node* head)
 {
    struct node* t=( struct node*)malloc(sizeof( struct node));
    t->data=val;
    t->next='\0';
    while(head->next!='\0')
    {
        head=head->next;
    }
    head->next=t;
 }
 int main()
 {
      struct node* head;
      head='\0';
      struct node* temp=( struct node*)malloc(sizeof( struct node));
      temp->data=2;
      temp->next='\0';
      head=temp;
      insert(3,head);
      insert(4,head);
      insert(5,head);
      insert(6,head);
      insert(7,head);
      insert(8,head);
      temp=head;
      while(temp!='\0')
      {
           printf("%d ",temp->data);
           temp=temp->next;
      }
      return 0;
 }
