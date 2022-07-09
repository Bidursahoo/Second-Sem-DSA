#include<stdio.h>
main()
{
    int a[100], n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    input(a,n);
    selsort(a,n);
    display(a,n);
}
void selsort(int a[],int n)
{
    int i,j,min,temp,min_index;
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        min_index = i;
        for(j=i+1;j<n;j++)
        {
            if(min > a[j])
            {
                    min = a[j];
                    min_index = j;
            }
        }
        temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
}
void display(int b[], int m)
{
    int i;
    printf("Sorted array");
    for(i=0;i<m;i++)
        printf("%d\n",b[i]);
}
void input(int a[], int n)
{
    int i;
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
