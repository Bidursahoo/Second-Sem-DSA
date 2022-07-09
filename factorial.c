#include<stdio.h>
main()
{
    int num, fac;
    printf("Enter the number");
    scanf("%d",&num);
    facto(num, &fac);
    printf("Factorial of %d is %d",num,fac);
}
void facto(int num, int *fac)
{
    int i;
    *fac=1;
    for(i=1;i<=num;i++)
    {
        (*fac)=(*fac) * i;
    }
}
