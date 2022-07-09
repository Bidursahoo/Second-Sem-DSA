#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define SIZE 50
char stack[SIZE];
int top= -1;
void push(char x)
{
    if(top==SIZE-1)
    {
        printf("Overflow");
    }
    else
    {
        stack[++top] = x;
    }
}
char pop()
{
    if(top == -1)
        return -1;
    else return stack[top--];
}
char prec(char c)
{
    if(c=='^')
        return 3;
    else if(c=='*' || c=='/')
        return 2;
    else if(c=='+'|| c=='-')
        return 1;
    else if(c=='(')
        return 0;
    else
        return -1;
}
int intopo(char st[], char post[])
{
    int i,j=0;
    char x;
    for(i=0;i<strlen(st);i++)
    {
        if(isalnum(st[i]))
            post[j++]=st[i];
        else if(st[i]=='(')
        {
            push(st[i]);
        }
        else if(st[i]==')')
        {
            while(stack[top] !='(' && top !=-1)
            {
                post[j++] = pop();
            }
            x=pop();
        }
        else
        {
            while(top!=-1 && (prec(stack[top]) > prec(st[i])))
            {
                post[j++]=pop();
            }
            push(st[i]);
        }
    }
    while(top!=-1)
    {
         post[j++]=pop();
    }
    post[j]='\0';
}
main()
{
    char st[SIZE], post[SIZE];
    printf("Enter the Infix expression");
    scanf(" %s",st);
    intopo(st,post);
    printf("postfix is %s",post);
}
