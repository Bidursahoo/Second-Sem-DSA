#include<stdio.h>
main()
{
    int arr[100],n,ar[100],m,arrr[200];
    printf("FOR THE FIRST INPUT\n");
    printf("Enter the number elemnets");
    scanf("%d",&n);
    input(arr,n);
    printf("FOR THE SECOND INPUT\n");
    printf("Enter the number elemnets");
    scanf("%d",&m);
    input(ar,m);
    printf("THE MERGED ONE IS\n");
    merger(arr,n,ar,m,arrr);
}
int input(int a[],int n)
{
    int i;
    printf("Enter the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    return n;
}
void merger(int a[], int n, int b[], int m, int c[])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<m;j++,i++)
    {
        c[i]=b[j];
    }
    printf("After merging ");
    for(i=0;i<(n+m);i++)
        printf("%d\t",c[i]);
}
