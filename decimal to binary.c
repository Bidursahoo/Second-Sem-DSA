#include<stdio.h>
#include<stdlib.h>
int top = -1;
void push(int x, int stack_arr[])
{
        if(top == (100-1))
                printf("Stack Overflow\n");
        else
        {
                top=top+1;
                stack_arr[top] = x;
        }
}
int pop( int stack_arr[])
{
        int x;
        if(top == -1)
        {
                printf("Stack Underflow\n");
                exit(0);
        }
        else
        {
                x = stack_arr[top];
                top=top-1;
        }
        return x;
}
void dectobin(int num)
{
    int rem,stack[100];
    while(num!=0)
    {
        rem=num%2;
        num=num/2;
        push(rem,stack);
    }
    while(top!=-1)
        printf("%d", pop( stack));
    printf("\n");
}
main()
{
    int num;
    printf("Enter the number\t");
    scanf("%d",&num);
    printf("\nBinary number is  ");
    dectobin(num);
}
