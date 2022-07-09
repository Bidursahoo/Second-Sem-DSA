#include<stdio.h>
#include<stdlib.h>
main()
{
    int *p,n,pos,x;
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
        printf("Enter the element you want to search");
        scanf("%d",&x);
        pos=linsearch(p,n,x);
        if(pos == 0)
            printf("Element not found");
        else
            printf("Element %d is found at %d",x,pos+1);
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
int linsearch(int *p, int n, int x)
{
    int i;
    for (i=0;i<n;i++)
    {
        if (*(p+i)==x)
            return i;
    }
    return 0;
}
