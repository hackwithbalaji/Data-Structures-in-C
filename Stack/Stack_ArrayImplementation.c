#include<stdio.h>
#define MAX 100
int arr[MAX];
int top=-1;

void push(int x)
{
    if(top==MAX)
    {
        printf("ERROR:Stack is full\n");
        return;
    }
    arr[++top]=x;
}
void pop()
{
    if(top==-1)
    {
        printf("ERROR:Stack is empty\n");
        return;
    }
    top--;
}
void Print_top()
{
    printf("%d",arr[top]);
}
void print()
{
    printf("Stack : ");
    for(int i=0;i<=top;i++) printf("%d ",arr[i]);
    printf("\n");
}
int main()
{
    push(1);
    print();
    push(2);
    print();
    pop();
    print();
    pop();
    print();
    pop();
    return 0;
}
