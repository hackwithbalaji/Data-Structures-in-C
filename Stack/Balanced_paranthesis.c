//Simple C program to check balanced paranthesis using STACK
#include<stdio.h>
//Simple stack
char arr[1000];
int top=-1;
void push(char x)
{
    arr[++top]=x;
}
void pop()
{
    top--;
}
char return_top()
{
    return arr[top];
}
int is_Empty()
{
    if(top==-1) return 1;
    return 0;
}
int match(char open,char close)
{
    if(open=='(' && close==')') return 1;
    else if(open=='[' && close==']') return 1;
    else if(open=='{' && close=='}') return 1;
    return 0;
}
void Balanced_paranthesis(char* str)
{
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='(' || str[i]=='[' || str[i]=='{') push(str[i]);
        else if(str[i]==')' || str[i]==']' || str[i]=='}')
        {
           if(is_Empty() || !match(return_top(),str[i]))
           {
               printf("Not Balanced");
               return;
           }
           else
           {
               pop();
           }
        }
    }
    is_Empty()?printf("Balanced"):printf("Not Balanced");
}

int main()
{
    char str[1000];
    printf("Enter Expression to check : ");
    scanf("%s",str);
    Balanced_paranthesis(str);
    return 0;
}
