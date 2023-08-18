//Program to find out factorial through recursion in function
#include<stdio.h>
#include<math.h>
long long int fact(int);
int sum(int );
void main()
{
    int n,q ;
    long long int p;
    while(1)
    {
    printf("\nEnter a number: ");
    scanf("%d",&n);
   // p=fact(n);
    q=sum(n);
   //9876
    printf("Factorial is %lld",p);
    printf("\nSum of first n natural no. is %d",q);
}}
long long int fact(int a)
{
    long long int i;
    if(a>=1)
       {i=a*fact(a-1);
       return i;
       }
    else
        return 1;

}
int sum(int a)   // Direct Recursion
{
    int i;
    if(a>1)
        {i=a+sum(a-1);
        return i;}
    else
        return 1;
}
void odd();
void even();
int n=1;
void odd()
{
    if(n<=10)
    {
        printf("%d ",n+1);
        n++;
        even();
    }
    return;
}
void even()
{
    if(n<=10)
    {
        printf("%d ",n-1);
        n++;
        odd();
    }
    return;
}
void main()    // Indirect Recursion  when a funnction  call another function, it is called indirect function
{
    odd();
}

void fun(int n)   // a function is said to be tail recursive if recursive call is the last thing done by function. there is no need to keep record of previous record
{
    if(n==0)
        return;
    else
        printf("%d",n);
    return fun(n-1);
}
int main()
{
    fun(3);
    return 0;
}



// a recursive function is said to be non-tail recursive if recursive call is not the last thing done by the function . after returning back, there is something left to evaluate
void fun(int n)
{
    if(n==0)
        return;
    fun(n-1);
    printf("%d",n);
}
int main()
{
    fun(3);
    return 0;
}
