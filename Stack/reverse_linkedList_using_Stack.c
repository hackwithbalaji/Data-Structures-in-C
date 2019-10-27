#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* arr[1000];
int top=-1;
void push(int x)
{
    arr[++top]=x;
}
void pop()
{
    top--;
}
struct node* return_top()
{
  return arr[top];
}
int is_empty()
{
    if(top==-1) return 0;
    else return 1;
}
void insert(int val)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    struct node* t=head;
    while(t->next!=NULL)
    {
        t=t->next;
    }
    t->next=temp;
}
void print()
{
    struct node* t=head;
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
    printf("\n");
}
void reverse()
{
    struct node* t=head;
    while(t!=NULL)
    {
        push(t);
        t=t->next;
    }
    struct node* temp=return_top();
    head=temp;
    while(is_empty())
    {
        temp->next=return_top();
        pop();
        temp=temp->next;
    }
    temp->next=NULL;
}
int main()
{
    int n,val;
    printf("Enter number of Elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      scanf("%d",&val);
      insert(val);
    }
    print();
    //reverse Linked list
    reverse();
    print();
}
