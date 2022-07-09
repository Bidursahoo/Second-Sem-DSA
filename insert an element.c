#include<stdio.h>
main()
{
    int arr[100],n,pos,i,ele;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    shift(arr,n,pos,ele);
}
int shift(int a[],int n, int pos,int ele)
{
    int i;
    printf("Enter the element you want to input ");
    scanf("%d",&ele);
    printf("Enter the position ");
    scanf("%d",&pos);
    for(i=n-1; i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;
    n++;
    printf("After inserting:");
    for(i=0; i <= n-1 ;i++)
        printf("%d\n",a[i]);
    return 0;
}
