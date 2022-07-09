#include<stdio.h>
#include<stdlib.h>
typedef struct comp1
{
    int real, img;
};
void input(struct comp1 *p)
{
    printf("Enter the real part");
    scanf("%d",&p ->real);
    printf("Enter the imaginary part");
    scanf("%d",&p ->img);
}
void display(struct comp1 c[])
{
    printf("\nComplex number = %d + %di", c ->real, c ->img);
}
struct comp1 add(struct comp1 *p, struct comp1 *o)
{
    struct comp1 temp;
    temp.real= p->real+ o->real;
    temp.img= p->img+ o->img;
    printf("\nSum = %d + %di",temp.real,temp.img);
    return temp;
}
struct comp1 sub(struct comp1 *p, struct comp1 *o)
{
    struct comp1 temp;
    temp.real= o->real- p->real;
    temp.img= o->img- p->img;
    printf("\nSubtract = %d + %di",temp.real,temp.img);
    return temp;
}
struct comp1 mul(struct comp1 *p, struct comp1 *o)
{
    struct comp1 temp;
    temp.real= p->real* o->real;
    temp.img= p->img* o->img;
    printf("\nMultiply = %d + %di",temp.real,temp.img);
    return temp;
}
main()
{
    struct comp1 p[10], o[10], r;
    input(p);
    input(o);
    display(p);
    display(o);
    add(p,o);
    sub(p,o);
    mul(p,o);
    return 0;
}

