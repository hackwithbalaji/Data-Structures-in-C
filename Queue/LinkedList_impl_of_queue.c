#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;

int IsEmpty()
{
    if(front==NULL && rear==NULL) return 1;
    return 0;
}

void Enqueue(int val)
{
    struct node* t=(struct node*)malloc(sizeof(struct node));
    t->data=val;
    t->next=NULL;
    if(IsEmpty())
    {
        front=t;
        rear=t;
        return;
    }
    rear->next=t;
    rear=rear->next;
}

void Dequeue()
{
    if(IsEmpty())
    {
        printf("Queue is Empty!! Cant perfome Dequeue\n");return;
    }
    struct node* temp=front;
    if(front==rear)
    {
        front=NULL;
        rear=NULL;
    }
    else front=front->next;
    free(temp);
}
void print()
{
    if(IsEmpty())
    {
        printf("Queue is Empty");return;
    }
    struct node* temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{

    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    printf("Before Dequeue : ");
    print();
    Dequeue();
    Dequeue();
  //  Dequeue();
  //  Dequeue();
  //  Dequeue();
    printf("After Dequeue : ");
    print();
    return 0;
}
