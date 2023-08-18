#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    printf("Enter your name: ");
    gets(a);
    printf("My name is ");
    puts(a);
    printf("%s",strupr(a));
    k();
    L();
}
k()
{
    int i, sum;
    sum=0;
    for(i=0;i<5;i++)
        sum=sum+2;
    printf("\nsum:%d \n",sum);
}
L()
{
    int j;
    for(j=0;j<9;j++)
        j++;
    printf("%d",j);
}

