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
void rev(struct node* h)
{
    if(h->next==NULL)
    {
        head=h;
        return;
    }
    rev(h->next);
    struct node* p=h->next;
    p->next=h;
    h->next=NULL;
}
int main()
{
    head=NULL;
    int n,val;
    printf("Enter no. of Elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&val);
        insert(val);
    }
    printf("Before reverse : ");
    print(head);
    rev(head);
    printf("After reverse : ");
    print(head);
    return 0;
}
