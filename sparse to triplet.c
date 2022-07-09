#include<stdio.h>
main()
{
    int r, c, a[20][20], b[20][20];
    printf("Enter the values of row  ");
    scanf("%d",&r);
    printf("Enter the values of colomn ");
    scanf("%d",&c);
    input(r,c,a);
    display(r,c,a);
    triplet(a,r,c,b);
    print(b);
}
void input(int r, int c, int a[10][10])
{
    int i, j;
    printf("\nEnter elements of matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void display(int r, int c, int a[10][10])
{
    printf("The inputted sparse matrix is \n");
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void triplet(int a[10][10], int r, int c, int b[20][20])
{
    int i, j, k;
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
        b[0][2] = k-1;
    }
}
void print(int b[20][20])
{
    int i, cl;
    cl = b[0][2];
    printf("\nTriples are\n");
    for (i = 0; i <=cl; i++)
    {
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
    }
}
