#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;
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
void find_mid()
{
    struct node* fast=head->next; // or fast=head; depends on which element in even count
    struct node* slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    printf("Middle Element is : %d",slow->data);
}
int main()
{
    head=NULL;
    int n,val;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        insert(val);
    }
    print();
    find_mid();
}
