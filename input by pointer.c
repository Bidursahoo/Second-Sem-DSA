#include<stdio.h>
main()
{
    int a[100], n, p;
    printf("Enter the number of elements");
    scanf("%d",&n);
    input(a,n);
    display(a,n);
    p=sum(a,n);
    printf("\nSum will be %d",p);
}
void input(int *p, int n){
    int i;
    printf("Enter the values of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
}
void display(int b[], int m)
{
    int i;
    printf("\nInputed values of array  ");
    for(i=0;i<m;i++)
        printf("%d\t",b[i]);
}
int sum(int *p,int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+*(p+i);
    }
    return s;

}
