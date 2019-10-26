#include<stdio.h>
#include<string.h>
#define MAX 100
char arr[MAX];
int top=-1;

void push(char x)
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
char topofstack()
{
    return arr[top];
}
void print()
{
    printf("Stack : ");
    for(int i=0;i<=top;i++) printf("%d ",arr[i]);
    printf("\n");
}
int main()
{
    char str[100];
    printf("Enter String : ");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++)
    {
        push(str[i]);
    }
    for(int i=0;i<strlen(str);i++)
    {
        str[i]=topofstack();
        pop();
    }
    printf("%s",str);
    return 0;
}
