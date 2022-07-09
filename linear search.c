#include<stdio.h>
main()
{
    int arr[100],n,pos,x;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    input(arr,n);
    printf("Enter the element you want to search");
    scanf("%d",&x);
    pos=linsearch(arr,n,x);
    if(pos == 0)
        printf("Element not found");
    else
        printf("Element %d is found at %d",x,pos+1);
}
void input(int a[], int n)
{
    int i;
    printf("Enter numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int linsearch(int b[], int n, int x)
{
    int i;
    for (i=0;i<n;i++)
    {
        if (b[i]==x)
            return i;
    }
    return 0;
}
