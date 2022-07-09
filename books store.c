#include<stdio.h>
#include<string.h>
struct books
{
    char aname[100], bname[100];
    int page, edition;
};
main()
{
    struct books b[100];
    int n;
    printf("Enter the number of books");
    scanf("%d",&n);
    input(b,n);
    display(b,n);
}
void input(struct books b[],int n)
{
    int i;
    printf("\tEnter the details of books\t");
    for(i=0;i<n;i++)
    {
        printf("\nFor the book No.%d",i+1);
        printf("Book name ");
        scanf(" %[^\n]",b[i].bname);
        printf("Author name ");
        scanf(" %[^\n]",b[i].aname);
        printf("Page no. ");
        scanf("%d",&b[i].page);
        printf("Edition ");
        scanf("%d",&b[i].edition);
    }
}
void display(struct books b[],int n)
{
    int i;
    printf("\n\t--------DETAILS OF BOOKS--------\t\n");
    for(i=0;i<n;i++)
    {
        printf("\nFor the book No.%d",i+1);
        printf("\nName %s",b[i].bname);
        printf("\nAuthor name %s",b[i].aname);
        printf("\nPage no. %d",b[i].page);
        printf("\nEdition %d",b[i].edition);
    }
}
