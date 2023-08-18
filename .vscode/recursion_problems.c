#include<stdio.h>
#include<stdlib.h>

int fib(int );  // fibonacci series program
int fib(int n)
{
    if(n>2)
    return(fib(n-1)+fib(n-2));
    else
    return 1;
}

int gcd(int ,int );
int gcd(int a, int b)
{
    if(b%a==0)
    return a;
    if(a%b==0)
       return b;
    if(a>b)
    gcd(a%b,b);
    else
    gcd(a,b%a); 
}



void main()
{
    int n;
    int i,a,b;
    printf("Enter the position of number of position of fibonacci series:\n");
    scanf("%d",&n);
    printf("Enter two number for gcd :\n");
    scanf("%d%d",&a,&b);
    printf("%d \n",fib(n));
    printf("Fibonacci sries:\n");
    for(i=1;i<=n;i++)
    printf("%d ",fib(i));
    printf("\nGCD : %d", gcd(a,b));
}