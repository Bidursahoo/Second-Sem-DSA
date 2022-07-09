#include<stdio.h>
main()
{
    int a[100], n, p;
    printf("Enter the number of elements");
    scanf("%d",&n);
    input(a,n);
    display(a,n);
    point(a,n,&p);
}
void input(int a[], int n){
    int i;
    printf("Enter the values of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int b[], int m)
{
    int i;
    printf("Inputed values of array  ");
    for(i=0;i<m;i++)
        printf("%d\t",b[i]);
}
void point(int c[], int n, int *p)
{
    int i;
    for(i=0;i<n;i++)
    {
        p++;
        printf("\nAddress of a[%d] is %d",i+1,p);
    }
}
