#include<stdio.h>
main()
{
    int a[100],n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    input(a,n);
    display(a,n);
    reverse(a,n);
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
void reverse(int *a, int n)
{
    int i;
    printf("\nReversed array is  ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",*(a+i));
    }
}
