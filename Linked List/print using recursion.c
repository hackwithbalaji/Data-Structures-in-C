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
    while(t->next!=NULL) t=t->next;
    t->next=temp;
}
void print(struct node* h)
{

    if(h==NULL) return;
    printf("%d ",h->data);
    print(h->next);
}
void rprint(struct node* h)
{
    if(h==NULL) return;
    rprint(h->next);
    printf("%d ",h->data);
}
int main()
{
    head=NULL;
    int n,val;
    printf("enter no. of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        insert(val);
    }
    printf("print using recursion : ");
    print(head);
    printf("\nreverse print using recursion : ");
    rprint(head);
    return 0;
}
