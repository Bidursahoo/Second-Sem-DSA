#include<stdio.h>
main(){
    int arr[100], n, sum;
    printf("Enter the total number of students");
    scanf("%d",&n);
    input(arr, n);
    display(arr,n);
    sum = class_sum(arr,n);
    printf("\nTotal marks secured %d",sum);
    class_max(arr,n);
    class_avg(arr,n);
    class_min(arr,n);
    return 0;
}
void input(int a[], int n){
    int i;
    printf("Enter the values of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int b[], int m)
{
    int i;
    printf("Inputed values of array");
    for(i=0;i<m;i++)
        printf("%d\n",b[i]);
}
int class_sum(int c[], int n)
{
    int i, sum=0;
    for(i=0;i<n;i++)
        sum=sum+c[i];
    return sum;
}
void class_avg(int d[], int n)
{
    int i, sum=0, avg;
    for(i=0;i<n;i++)
        sum += d[i];
    avg= sum/n;
    printf("\nThe average is %d", avg);
}
int class_max(int e[],int n)
{

    int i;
    int max=e[0];
    for(i=0;i<n;i++)
    {
        if (max<e[i])
            max = e[i];
    }
    printf("\nThe maximum value is: %d",max);
    return max;
}
int class_min(int f[],int n)
{

    int i;
    int min=f[0];
    for(i=0;i<n;i++)
    {
        if (f[i]< min)
            min = f[i];
    }
    printf("\nThe minimum value is: %d",min);
    return min;
}
