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
void delete(int pos)
{
    struct node* temp;
    if(pos==1)
    {
         temp=head;
         head=head->next;
         free(temp);
         return;
    }
    struct node* t=head;
    for(int i=1;i<pos-1;i++)
    {
        t=t->next;
    }
    temp=t->next;
    t->next=temp->next;
    free(temp);
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
int main()
{
    head=NULL;
    int n,val,pos;
    printf("enter number of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        insert(val);
    }
    printf("Enter position to delete : ");
    scanf("%d",&pos);
    delete(pos);
    print();
    return 0;
}
