#include<stdio.h>
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
    printf("Rotated values of array");
    for(i=0;i<m;i++)
        printf("%d\n",b[i]);
}
void reverse(int arr[],int n)
{
   int temp = arr[n-1], i;
   for (i = n; i >= 0; i--)
      arr[i] = arr[i-1];
   arr[0] = temp;
}
main()
{
    int arr[100],n;
    printf("Enter the number elemnets");
    scanf("%d",&n);
    input(arr,n);
    reverse(arr,n);
    display(arr,n);
}