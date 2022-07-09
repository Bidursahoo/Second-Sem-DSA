#include<stdio.h>
main()
{
    int arr[100],n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    input(arr,n);
    updation(arr,n);
}
void input(int a[],int n)
{
    int i;
    printf("Enter the elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void updation(int b[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        b[i]=b[i]*10;
    }
    printf("The updated elements are:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}
