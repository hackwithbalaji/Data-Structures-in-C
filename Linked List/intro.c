#include<stdio.h>

struct node
{
    int data;
    struct node* link;
};
//INSERTION AT END
struct node* insert(struct node* head,int val)
{

    struct node* temp= (struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->link='\0';
    if(head=='\0')
    {
        head=temp;
        return head;
    }
    struct node* temp1;
    temp1=head;
    while(temp1->link!='\0')
    {
        temp1=temp1->link;
    }
    temp1->link=temp;
    return head;
}
void print(struct node* temp)
{
  if(temp == NULL) return;
  printf("%d ",temp->data);
  print(temp->link);
}
void mid(struct node* head)
{
    struct node* slow;
    struct node* fast;
    slow=head;
    fast=head;
    while(fast!='\0' && fast->link!='\0')
    {
        slow=slow->link;
        fast=fast->link->link;
    }
    printf("\nMid Element is %d",slow->data);
}
int main()
{
    int n,val;
    struct node* head;
    head='\0';
    printf("Enter number of Elements in Linked list : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        head=insert(head,val);
    }
    print(head);
    mid(head);
    return 0;
}
