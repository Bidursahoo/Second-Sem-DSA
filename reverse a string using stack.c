#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int top=-1;
char pop(char []);
void push(char [],char );
main()
{
    char str[100], in[100], revr[100];
    int i=0;
    printf("Enter the characters: ");
    scanf("%[^\n]",str);
    //printf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        push(in,str[i]);
    }
    display(in);
    for(i=0;top!=-1;i++)
    {
        revr[i]=pop(in);
    }
    revr[i]='\0';
    printf("\nthe reversed is %s",revr);
}
void push(char a[],char b)
{
    char x;
    if(top==99)
    {
        printf("\nOver Flow");
    }
    else
    {
        top++;
        a[top]=b;
    }
}
char pop(char a[])
{
    char p;
    if(top<=-1)
    {
        printf("\nUnder Flow");
    }
    else
    {
        p=a[top];
        top--;
        return p;
    }
}
void display(char stack1[])
{
    int i;
    if(top>=0)
    {
        printf("\nThe elements in stacks\n");
        for(i=0; i<=top; i++)
            printf("%c",stack1[i]);
    }
    else
    {
        printf("Stack is empty");
    }
}
