#include<stdio.h>
main()
{
    int arr[100],n,inp,ret,i;
    printf("Enter the number of elements");
    scanf("%d",&n);
    input(arr, n);
    printf("Enter the element you want to search");
    scanf("%d",&inp);
    ret = bsearch(arr,n,inp);
    if(ret == -1)
        printf("Element is not found");
    else
        printf("The result is present in %d", ret);
}
int bsearch(int arr[], int n, int inp)
{
    int i=0;
    int end=n-1;
    while (i <= end) {
    int mid = (end + i) / 2;
    if (arr[mid] == inp){
      return ++mid;
    }
    else if (arr[mid] < inp){
       i = mid + 1;
    }
    else{
       end = mid - 1;
    }
  }
  return -1;
}
void input(int a[], int n){
    int i;
    printf("Enter the values of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
