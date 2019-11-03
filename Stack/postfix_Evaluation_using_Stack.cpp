#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int operation(int opt,int x,int y)
{
    int res;
    if(opt=='+')
    {
        res=x+y;
    }
    else if(opt=='-')
    {
        res=x-y;
    }
    else if(opt=='*')
    {
        res=x*y;
    }
    else if(opt=='/')
    {
        res=x/y;
    }
    return res;
}
int main()
{
      char arr[100];
      int i;
      stack<int> s;
      cout<<"Enter Postfix Expression to Evaluate : "; //Eg INPUT : 23*54*+9- where each number is a seperate digit (2*3)
      cin.get(arr,100);
      for(i=0;i<strlen(arr);i++)
      {
          if(arr[i]!='+' && arr[i]!='-' && arr[i]!='*' && arr[i]!='/')
          {
              s.push(arr[i]-'0');
          }
          else if(arr[i]=='+' || arr[i]=='-' || arr[i]=='*' || arr[i]=='/')
          {
              int y=s.top();
              s.pop();
              int x=s.top();
              s.pop();
              int res=operation(arr[i],x,y);
              s.push(res);
          }
      }
      cout<<s.top();
      return 0;
}
