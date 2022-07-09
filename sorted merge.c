#include<stdio.h>
main()
{
    int a[100],b[100],c[200],n1,n2,n3;
    printf("enter the number of digits");
    scanf("%d",&n1);
    input(a,n1);
    printf("enter the number of digits");
    scanf("%d",&n2);
    input(b,n2);
    mergesort(a,b,c,n1,n2,n3);
    display(c,n1,n2);
}
void mergesort(int a[],int b[],int c[],int n1,int n2,int n3)
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else if(a[i]>b[j]){
            c[k++]=b[j++];
        }
        else
        {
            c[k++]=b[j++];
            c[k++]=a[i++];
        }
    }
    while(i<n1)
    {
        c[k++]=a[i++];
    }
    while(j<n2)
    {
        c[k++]=b[j++];
    }
}
void input(int a[], int n){
    int i;
    printf("Enter sorted array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int b[], int m,int n)
{
    int i;
    printf("Final array");
    for(i=0;i<(m+n);i++)
        printf("%d\t",b[i]);
}
