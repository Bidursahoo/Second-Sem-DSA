#include<stdio.h>
main()
{
    int arr[100],n;
    printf("Enter the number of students");
    scanf("%d",&n);
    input(arr, n);
    display(arr, n);
    return 0;
}
void input(float a[], int n)
{
    int i;
    printf("Enter the CGPA of students");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
}
void display(float b[], int n)
{
    int i;
    int sum =0;
    printf("Displaying students having more than 9 CGPA: \n");
    for(i=0;i<n;i++)
    {
        if(b[i]>=9){
            printf("Students having CGPA more than 9 are : %0.2f\n",b[i]);
            sum++;
        }
    }
    printf("Total student scroed above cpga 9 : %d", sum);
}
