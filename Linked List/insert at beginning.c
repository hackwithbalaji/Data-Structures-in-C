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
    temp->next=head;
    head=temp;
}
void print()
{
    struct node* temp=head;
    while(temp!='\0')
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
head='\0';
int n,val,i;
printf("enter no. of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&val);
    insert(val);
}
print();
return 0 ;
}
