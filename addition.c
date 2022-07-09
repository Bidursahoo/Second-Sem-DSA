#include<stdio.h>
main()
{
    int a, b, sum;
    printf("Enter the first number");
    scanf("%d",&a);
    printf("Enter the second number");
    scanf("%d",&b);
    add(a,b,&sum);
    printf("The sum is %d",sum);
}
void add(int a,int b, int *sum)
{
    *sum = a+b;
}
