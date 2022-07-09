#include<stdio.h>
#include<stdlib.h>
main()
{
    int a[20][20],r,c,b[20][3],d[20][3];
    printf("Enter the number of rows ");
    scanf("%d",&r);
    printf("Enter the number of column ");
    scanf("%d",&c);
    input(r,c,a);
    triplet(a,r,c,b);
    transpose(b,d);
}
void input(int r, int c, int a[10][10])
{
    int i, j;
    printf("\n----Enter elements of matrix----\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n----The inputted sparse matrix is------ \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void triplet(int a[10][10], int r, int c, int b[20][3])
{
    int i, j, k, cl;
    k = 1;
    b[0][0] = r;
    b[0][1] = c;
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }

    }
    b[0][2] = k-1;
    cl = b[0][2];
    printf("\n----Triples are---\n");
    for (i = 0; i <=cl; i++)
    {
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
    }
}
void transpose(int a[20][3],int d[20][3])
{
    int i,j,k=1;
    d[0][0]=a[0][1];
    d[0][1]=a[0][0];
    d[0][2]=a[0][2];
    for(i=0;i<d[0][0];i++)
    {
        for(j=1;j<=a[0][2];j++)
        {
            if(a[j][1]==i)
            {
               d[k][0]=a[j][1];
               d[k][1]=a[j][0];
               d[k][2]=a[j][2];
               k++;
            }
        }
    }
    printf("\n----Triples of the transpose---\n");
    for (i = 0; i <k; i++)
    {
        printf("%d\t%d\t%d\n", d[i][0], d[i][1], d[i][2]);
    }
}
