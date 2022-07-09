#include<stdio.h>
#include<math.h>
main()
{
    int n, arr[100];
    printf("Enter the number of elements you wanna enter: \n");
    scanf("%d",&n);
    input(arr[100],n);
    stddeviation(arr[100],n);
}
void input(int a[],int n)
{
    int i;
    printf("enter the elements:");
    for( i = 0 ; i < n ; ++i )
    {
        scanf("%d",&a[i]);
    }
}
void stddeviation(int b[], int n)
{
    int i;
    float sum=0 , sum2=0 , mean=0, result;
    for(i=0;i<n;i++)
    {
        sum += b[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++)
    {
        sum2 += pow(b[i]-mean,2);
    }
    result= sqrt(sum2/n);
    printf("Standard deviation is %0.2f\t",result);
}
