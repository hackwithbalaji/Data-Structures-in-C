#include<stdio.h>
int arr[100];
int front=-1;
int rear=-1;

int IsFull()
{
if(rear<100) return 0;
return 1;
}
int IsEmpty()
{
if(front==-1 && rear==-1) return 1;
return 0;
}
void Enqueue(int val)
{
    if(IsEmpty())
    {
        front=0;
        rear=0;
    }
    else if(IsFull())
    {
        printf("Queue is full");
        return;
    }
    else
    {
        rear=rear+1;
    }
    arr[rear]=val;
}
void Dequeue()
{
    if(IsEmpty())
    {
        printf("Queue is Empty");return;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=front+1;
    }
}
void print()
{
    if(IsEmpty())
    {
        printf("Empty");
        return;
    }
    for(int i=front;i<=rear;i++) printf("%d ",arr[i]);
}
int main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Dequeue();
    Dequeue();
 // Dequeue();
 // Dequeue();
    print();
    return 0;
}
