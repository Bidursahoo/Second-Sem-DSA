#include<stdio.h>
main()
{
    int arr[100],n,pos,i;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    remover(arr,n,pos);
}
int remover(int a[],int n, int pos)
{
    int i;
    printf("Enter the position you want to delete ");
    scanf("%d",&pos);
    for(i=n-1; i>pos-1;i--)
    {
        a[i-1]=a[i];
    }
    n--;
    printf("After deleting:");
    for(i=0; i < n ;i++)
        printf("%d\t",a[i]);
    return 0;
}

