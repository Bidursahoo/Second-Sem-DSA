#include<stdio.h>
void change(int a[20][3])
{
    int i;
    printf("Enter no of rows");
    scanf("%d",&a[0][0]);
    printf("Enter no of columns");
    scanf("%d",&a[0][1]);
    printf("Enter the no elements");
    scanf("%d",&a[0][2]);
    for(i=1;i<=a[0][2];i++)
    {
        printf("Enter row index ");
        scanf("%d",&a[i][0]);
        printf("Enter column index ");
        scanf("%d",&a[i][1]);
        printf("Enter element");
        scanf("%d",&a[i][2]);
    }
}
void matrix(int a[20][3],int b[20][20])
{
    int i,j,k;
    for(i=0;i<a[0][0];i++)
    {
        for(j=0;j<=a[0][1];j++)
        {
            b[i][j]=0;
        }
    }
    for(k=1;k<=a[0][2];k++)
    {
        b[a[k][0]][a[k][1]]=a[k][2];
    }
}
main()
{
    int a[20][3],b[20][20],i,j;
    change(a);
    matrix(a,b);
    printf("The matrix is\n");
    for(i=0;i<a[0][0];i++)
    {
        for(j=0;j<a[0][1];j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
