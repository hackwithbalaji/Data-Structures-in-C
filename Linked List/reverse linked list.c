#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* insert(struct node* head,int val)
{
 struct node* temp=(struct node*)malloc(sizeof(struct node));
 temp->data=val;
 temp->next='\0';
 if(head=='\0')
 {
     head=temp;
     return head;
 }
 struct node* t=head;
 while(t->next!='\0')
 {
     t=t->next;
 }
 t->next=temp;
 return head;
}
struct node* rev(struct node* head)
{
 struct node* prev;
 struct node* curr;
 struct node* nxt;
 prev='\0';
 nxt='\0';
 curr=head;
 while(curr!='\0')
 {
     nxt=curr->next;
     curr->next=prev;
     prev=curr;
     curr=nxt;
 }
 return prev;
}
void print(struct node* head)
{
    while(head!='\0')
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
int main()
{
    struct node* head;
    head='\0';
    int n,val;
    printf("enter no of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        head=insert(head,val);
    }
    print(head);
    head=rev(head);
    print(head);
}
