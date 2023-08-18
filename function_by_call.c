#include<stdio.h>
int* fun(int*, int*);
void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    fun(&a,&b);
    printf("numbers %d, %d",a,b);
}
int* fun(int*p,int*q)
{
    int t;

    t = *p;
    *p = *q;
    *q = t;
}

