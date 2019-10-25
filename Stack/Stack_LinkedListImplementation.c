#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* top=NULL;
void push(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop()
{
    if(top==NULL)
    {
        printf("ERROR:Stack is Empty\n");
        return;
    }
    struct node* temp=top;
    top=top->next;
    free(temp);
}
void print()
{
    struct node* t=top;
    printf("STACK : ");
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->next;
    }
    printf("\n");
}
int main()
{
    push(1);
    print();
    push(2);
    print();
    push(3);
    print();
    pop();
    print();
    pop();
    print();
    pop();
    print();
    pop();
    return 0;
}
