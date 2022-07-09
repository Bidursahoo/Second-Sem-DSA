#include<stdio.h>
main()
{
    int a,b, areas,ar, per;
    printf("Enter the length");
    scanf("%d",&a);
    printf("Enter the width");
    scanf("%d",&b);
    ar=area(a,b,&areas);
    printf("The area is %d\n",ar);
    perimeter(a,b,&per);
    //perimeter(a,b,&per);
    printf("Perimeter is %d",per);
}
void area(int a,int b, int *area)
{
    *area= (a) * (b);
}
void perimeter(int p1, int p2, int *p)
{
    *p=2 * (p1 + p2);
}
