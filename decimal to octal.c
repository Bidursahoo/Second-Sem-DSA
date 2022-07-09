#include<stdio.h>
#include<stdlib.h>
void push(int x, int *top, int stack_arr[])
{
        if(*top == (100-1))
                printf("Stack Overflow\n");
        else
        {
                *top=*top+1;
                stack_arr[*top] = x;
        }
}
int pop(int *top, int stack_arr[])
{
        int x;
        if(*top == -1)
        {
                printf("Stack Underflow\n");
                exit(0 );
        }
        else
        {
                x = stack_arr[*top];
                *top=*top-1;
        }
        return x;
}
void dectooct(int num)
{
    int rem,stack[100],top=-1;
    while(num!=0)
    {
        rem=num%8;
        num=num/8;
        push(rem,&top,stack);
    }
    while(top!=-1)
        printf("%d", pop(&top, stack));
    printf("\n");
}
main()
{
    int num;
    printf("Enter the number  ");
    scanf("%d",&num);
    printf("\nOctal number is  ");
    dectooct(num);
}

