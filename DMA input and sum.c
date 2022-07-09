#include<stdio.h>
#include<stdlib.h>
main()
{
    int *p,n,su;
    printf("Enter the number of elements");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("No memory alocated");
        exit(0);
    }
    else
    {
        input(p,n);
        display(p,n);
        su=sum(p,n);
        printf("\nThe sum is %d",su);
    }

}
void input(int *p, int n){
    int i;
    printf("Enter the values of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
}
void display(int *p, int m)
{
    int i;
    printf("\nInputed values of array  ");
    for(i=0;i<m;i++)
        printf("%d\t",*(p+i));
}
int sum(int *p,int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+*(p+i);
    }
    return s;

}
