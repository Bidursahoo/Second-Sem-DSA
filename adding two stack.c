#include<stdio.h>
#include<stdlib.h>
struct stk
{
  int array[5],top1,top2;
};
void push1(struct stk *p)
{
    int x;
    if(p->top2==p->top1+1)
    {
        printf("\nOver Flow");

    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        p->top1=p->top1+1;
        p->array[p->top1]=x;
    }
}
void push2(struct stk *p)
{
    int x;
    if(p->top1==p->top2-1)
    {
        printf("\nOver Flow");

    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        p->top2=p->top2-1;
        p->array[p->top2]=x;
    }
}
int pop1(struct stk *p)
{
    int temp;
    if(p->top1==-1)
    {
        printf("\nUnder Flow");
        exit(0);
    }
    else
    {
        temp=p->array[p->top1];
        p->top1=p->top1-1;
    }
    return temp;
}
int pop2(struct stk *p)
{
    int temp;
    if(p->top2==-1)
    {
        printf("\nUnder Flow");
        exit(0);
    }
    else
    {
        temp=p->array[p->top2];
        p->top2=p->top2+1;
    }
    return temp;
}
void display(struct stk p)
{
    int i;
    if(p.top1>=0 && p.top2<=6)
    {
        printf("\nThe elements in first stack\n");
        for(i=p.top1; i>=0; i--)
            printf("%d\t",p.array[i]);
        printf("\nThe elements in second stack\n");
        for(i=p.top2; i<5; i++)
            printf("%d\t",p.array[i]);
        printf("\nPress Next Choice");
    }
    else
    {
        printf("Stack is empty");
    }
}
int main()
{
    struct stk st;
    st.top1=-1;
    st.top2=5;
    int ch,ele1,ele2;
    printf("\nStack Operations");
    printf("\n 1.PUSH1\t 2.PUSH2\t 3.POP1\t 4.POP2\t 5.Display\n ");
    do
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push1(&st);
                break;
            }
            case 2:
            {
                push2(&st);
                break;
            }
            case 3:
            {
                ele1=pop1(&st);
                printf("Element deleted from first %d",ele1);
                break;
            }
            case 4:
            {
                ele2=pop2(&st);
                printf("Element deleted from second %d",ele2);
                break;
            }
            case 5:
            {
                display(st);
            }
            default:
            {
                printf("\n Invalid");
            }
        }
    }
    while(1);
    return 0;
}
