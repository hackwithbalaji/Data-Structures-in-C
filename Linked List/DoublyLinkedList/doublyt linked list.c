#include<stdio.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head;
struct node* CreateNode(int val)
{
 struct node* temp=(struct node*)malloc(sizeof(struct node));
 temp->data=val;
 temp->next=NULL;
 temp->prev=NULL;
 return temp;
}
void insertAtHead(int val)
{
  struct node* temp=CreateNode(val);
  if(head==NULL)
  {
      head=temp;
      return;
  }
  head->prev=temp;
  temp->next=head;
  head=temp;
}
void insertAtLast(int val)
{
  struct node* temp=CreateNode(val);
  if(head==NULL)
   {
      head=temp;
      return;
   }
  struct node* t=head;
  while(t->next!=NULL) t=t->next;
  t->next=temp;
  temp->prev=t;
}
void print()
{
    if(head==NULL)
    {
        printf("Empty list");
        return;
    }
    struct node* t=head;
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
}
void rprint()
{
    if(head==NULL)
    {
        printf("Empty list");
        return;
    }
    struct node* t=head;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->prev;
    }
}
int main()
{
    head=NULL;
    int n,val;
    printf("Enter number of Elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        insertAtLast(val);
    }
    printf("Before rev : ");
    print();
    printf("\nAfter rev : ");
    rprint();
    return 0;
}
