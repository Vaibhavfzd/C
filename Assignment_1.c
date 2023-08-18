#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of month: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("January");
                break;
        case 2: printf("February");
                break;
        case 3: printf("March");
                break;
        case 4: printf("April");
                break;
        case 5: printf("May");
                break;
        case 6: printf("June");
                break;
        case 7: printf("July");
                break;
        case 8: printf("August");
                break;
        case 9: printf("Sepetmber");
                break;
        case 10: printf("october");
                 break;
        case 11: printf("November");
                break;
        case 12: printf("December");
                break;
        default: printf("Invalid Month");
    }
}



// program to print 10 natural numbers
#include<stdio.h>
void main()
{
    int n;
    printf("first 10 natural numbers are: \n");
    for(n=1;n<=10;n++)
    {
        printf("%d  ",n);
    }
}



//program to print a table of a number given by the user
#include<stdio.h>
void main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Table of the number %d is: \n",n);
    for(i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
}

// program to print odd numbers from the limit given by the user

#include<stdio.h>
void main()
{
    int n, i;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Odd numbers are:\n");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
            printf("%d ",i);
    }
}



//program to rread 10 numbers from user and find their sum
#include<stdio.h>
void main()
{
    int a[10], i;
    float avg, sum;
    printf("Enter 10 numbers:\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=0;
    for(i=0;i<=9;i++)
    {
        sum=sum + a[i];
    }
    printf("\nSum of given numbers is %f",sum);
    avg=sum/10;
    printf("\nAverage of given numbers is %f",avg);
}

//program to check if number given by user is prime or not
#include<stdio.h>
void main()
{
    int n, i;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("number is not prime");
            break;
        }
    }
    if(i==n)
        printf("Number is prime");
}

//program to print integer  float  and character value
#include<stdio.h>
void main()
{
    int n;
    float i;
    printf("Enter a number n : ");
    scanf("%d",&n);
    i=n;
    printf("Integer value of n is: %d\nFloat value of n is: %f\nCharacter value of n is: %c",n,i,n);
}


//program to print greater value than three numbers given by user
#include<stdio.h>
void main()
{
    int a, b, c, n;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    n=1+(a>b?a:(b>c?b:c));
    printf("Number that is greater than %d, %d, %d is  %d", a,b,c,n);
}

//PROGRAM TO PRINT STUDENTS DETAILS
#include<stdio.h>
#include<string.h>
void main()
{
    int a;
    char n[20], x[20], y[10];
    printf("Enter Your Name       : ");
    gets(n);
    printf("Enter Your Age        : ");
    scanf("%d",&a);
    printf("Enter Your Course Name: ");
    scanf("%s",&x);
    printf("\nEnter Year 90(as.first): ");
    scanf("%s",&y);
    printf("\n\nStudents Details: \n");
    puts(n);
    printf("%d years old\n",a);
    puts(x);
    puts(y);
}
