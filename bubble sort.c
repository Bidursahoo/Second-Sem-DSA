#include<stdio.h>
main()
{
    int a[100],n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    input(a,n);
    bsorts(a,n);
}
void input(int a[], int n)
{
    int i;
    printf("Enter elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void bsorts(int a[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (a[j] > a[j+1]){
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
            }
        }
    }
    printf("After sorting:");
    for (i=0; i<n; i++)
        printf("%d ", a[i]);
}
