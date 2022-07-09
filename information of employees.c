#include<stdio.h>
#include<string.h>
struct name
{
    char fname[100], mname[100], lname[100];
};
struct doj
{
    int dd,mm,yyyy;
};
struct employee
{
    int empno, salary;
    struct doj date;
    struct name nn;
};
main()
{
    struct employee e[10];
    int n;
    printf("Enter the number of employees ");
    scanf("%d",&n);
    empinput(e,n);
    saldisplay(e,n);
    namdisplay(e,n);
    sortdisplay(e,n);
}
void saldisplay(struct employee e[1000], int n)
{
    int i;
    printf("\n\t--------Displaying Salary more than 25000--------\n");
    for(i=0;i<n;i++)
    {
        if(e[i].salary>25000){
                printf("\nEmployee number %d",i+1);
                printf("\nNames are %s %s %s",e[1].nn.fname,e[i].nn.mname,e[i].nn.lname);
                printf("\nDate of Joining is %d/%d/%d",e[i].date.dd,e[i].date.mm,e[i].date.yyyy);
                printf("\nSalary is %d",e[i].salary);
        }
    }
}
void empinput(struct employee e[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("For employee number %d",i+1);
        printf("\nEnter the employee number:  ");
        scanf("%d",&e[i].empno);
        printf("\nEnter the name of employee  ");
        scanf(" %s %s %s",e[i].nn.fname,e[i].nn.mname,e[i].nn.lname);
        printf("\nEnter the date of joining  ");
        scanf("%d %d %d",&e[i].date.dd,&e[i].date.mm,&e[i].date.yyyy);
        printf("\nEnter salary  ");
        scanf("%d",&e[i].salary);
    }
}
void namdisplay(struct employee e[10],int n)
{
    int i;
    printf("\n\t-------Displaying who have last name as \"Mishra\"------\n");
    for(i=0;i<n;i++)
    {
        if(strcmp(e[i].nn.lname,"mishra")==0){
                printf("\nEmployee number %d",e[i].empno);
                printf("\nNames are %s %s %s",e[i].nn.fname,e[i].nn.mname,e[i].nn.lname);
                printf("\nDate of Joining is %d/%d/%d",e[i].date.dd,e[i].date.mm,e[i].date.yyyy);
                printf("\nSalary is %d",e[i].salary);
        }
    }
}
void sortdisplay(struct employee e[10],int n)
{
    int i,j,temp;
    printf("\n\t-------Ascending Order of Salary--------\t\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (e[j].salary > e[j+1].salary){
               temp = e[j].salary;
               e[j].salary = e[j+1].salary;
               e[j+1].salary = temp;
            }
        }
    }
    printf("\nAfter sorting ");
    for(i=0;i<n;i++)
    {
        printf("\nEmployee no.%d \t Name %s %s %s",e[i].empno,e[i].nn.fname,e[i].nn.mname,e[i].nn.lname);
        printf("\nDate of Joining %d/%d/%d \t Salary %d",e[i].date.dd,e[i].date.mm,e[i].date.yyyy,e[i].salary);

    }
}
