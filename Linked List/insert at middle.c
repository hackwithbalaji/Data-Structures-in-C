#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head;
void insert(int val,int pos)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    if(pos==1)
    {
        temp->next=head;
        head=temp;
        return;
    }
    struct node* t=head;
    for(int i=1;i<pos-1;i++)
    {
        t=t->next;
    }
    temp->next=t->next;
    t->next=temp;
}
void print()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    head=NULL;
    insert(1,1);
    insert(2,2);
    insert(4,3);
    insert(5,4);
    insert(3,3);
    print();
    return 0;
}
