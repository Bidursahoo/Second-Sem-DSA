#include<stdio.h>
#include<stdlib.h>
main()
{
    int *p,n;
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
        bsorts(p,n);
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
void bsorts(int *p, int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (*(p+j) > *(p+j+1)){
               temp = *(p+j);
               *(p+j) = *(p+j+1);
               *(p+j+1) = temp;
            }
        }
    }
    printf("After sorting:");
    for (i=0; i<n; i++)
        printf("%d ", *(p+i));
}
