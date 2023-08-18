#include<stdio.h>
#include<math.h>
#include<stdlib.h>
// program for writing table of given number
void main()
{
    int i, n;
    printf("Enter the number for table: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
        printf("%d * %d = %d\n",n,i,n*i);
}




// //program for finding approximate intelligence
// void main()
// {
//     float i, y=1, x=5.5;
//     printf("Finding out the approximate level of intelligence i\n");
//     printf("i\t\t y\t\t x\n");
//     for(y=1;y<=6;y++)
//     {
//         for(x=5.5;x<=12.5;)
//             {
//                 i = 2+(y+0.5*x);
//                 printf("%f\t%f\t%f\n",i,y,x);
//                 x=x+0.5;
//             }
//     }
// }





// // program to calculate compound interest 10 times
// void main()
// {
//     int i, n, q;
//     float a,p, r;
//     for(i=1;i<=10;i++)
//     {
//         fflush(stdin);
//         printf("Enter the principal P:\n");
//         scanf("%f",&p);
//         printf("Enter the interest rate r:\n");
//         scanf("%f",&r);
//         printf("Enter the times interest compounds q:\n");
//         scanf("%d",&q);
//         printf("Enter the number of Years n:\n");
//         scanf("%d",&n);
//         a=p*(pow((1+r/q),(n*q)));//always take value first and then write the formula in which values are gonna be put
//         printf("Final amount : %f\n",a);
//     }
// }




// // program to calculate the first seven terms of given series
// void main()
// {
//     int n;
//     float sum, x;
//     printf("Enter the value of x: ");
//     scanf("%f",&x);
//     sum=0;
//     for(n=2;n<=7;n++)
//     {
//         sum=sum + (pow(((x-1)/x),n))/2;
//     }
//     sum=sum+ (x-1)/x;
//     printf("Sum of first seven numbers: %f",sum);
// }





// // program to find out pythagorean triplets
// void main()
// {
//     int a, b, c, p, q, r;
//     printf("Pythagorean Triplets: \n");
//     printf("c\ta\tb\n\n");
//     for(c=1;c<=50;c++)
//     {
//         for(b=1;b<31;b++)
//             {
//                 for(a=1;a<31;a++)
//                 {
//                    //  p=pow(a,2);
//                      //q=pow(b,2);
//                      //r=pow(c,2);
//                      if(r==(p+q) && p<q)
//                      if(a*a +b*b== c*c && a<b)
//                        {printf("%d\t%d\t%d\n",c,a,b);}
//                 }
//             }

//     }
// }


// //Program to write Ramanujan Number
// void main()
// {
//     int i, j, k, l, r;
//     printf("i\tj\tk\tl\tr\n");
//     for(i=1;i<=100;i++)
//     {
//         for(j=1;j<=100;j++)
//         {
//             for(k=1;k<=100;k++)
//             {
//                 for(l=1;l<=100;l++)
//                 {
//                     if(i*i*i+j*j*j==k*k*k+l*l*l)
//                        {
//                            if(i!=l && i!=k && j!=k && j!=l && i!=j && k!=l && i<j && k<l && i<k && j&&l)
//                        {
//                            printf("%d\t%d\t%d\t%d\t%d\n",i,j,k,l,(i*i*i+j*j*j));
//                        }

//                        }
//                 }
//             }
//         }
//     }

// }



// //Program to print 24 hours of day with suffix am pm noon midnight
// void main()
// {
//     int h;
//     printf("24 hours\n\n");
//     for(h=1;h<=24;h++)
//     {
//         if(h==12)
//             {printf("%d:00  Noon\n",h);}
//         else if(h==24)
//            {printf("%d:00  Midnight\n",h);}
//         else if(h>12 && h<24)
//            {printf("%d:00 pm\n",h);}
//         else if(h>=1 && h<12)
//             printf("%d:00 am\n",h);
//     }
// }




// //Program to sum first n natural numbers
// void main()
// {
//     int i, j, sum, n;
//     printf("Enter the count: ");
//     scanf("%d",&n);
//     sum=0;
//     for(i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     printf("\nsum=%d",sum);
// }

// //program to sum first even numbers
// void main()
// {
//     int i, n, sum;
//     printf("Enter the count: ");
//     scanf("%d",&n);
//     sum=0;
//     for(i=1;i<=n;i++)
//         {
//             sum=sum+2*i;
//         }
//     printf("\nsum of %d even number: %d",n,sum);
// }


// //program to sum first n odd numbers
// void main()
// {
//     int i, n, sum;
//     printf("Enter the count: ");
//     scanf("%d",&n);
//     sum=0;
//     for(i=0;i<n;i++)
//         {
//             sum=sum+(2*i+1);
//         }
//     printf("\nsum of %d odd number: %d",n,sum);
// }



// //program to find out x power y
// void main()
// {
//     int i, x, y, m;
//     printf("Enter the value of x and power y: ");
//     scanf("%d%d",&x,&y);
//     m=x;
//     for(i=1;i<y;i++)
//     {
//         m=m*x;
//     }
//     printf("\n%d",m);
// }




// //program to count digits in given number
// void main()
// {
//     int i, n, m=0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(i=1;n>i;i*=10)
//     {
//         n%i;
//         m++;
//     }
//     printf("count of digits: %d",m);
// }




// //program to calculate sum of the digits of a given number
// void main()
// {
//     int i, n, r,sum=0;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(i=0;n!=0;i++)
//     {
//         r=n%10;
//         sum=sum+r;
//         n=n/10;
//     }
//     printf("sum of digits is %d",sum);
// }




// //program to reverse a number
// void main()
// {
//     int i, n, r, m;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     m=0;
//     for(i=0;n!=0;i++)
//     {
//         r=n%10;
//         m=m*10+r;
//         n=n/10;
//     }
//     printf("reverse is %d",m);
// }





// //program to write armstrong numbers
// void main()
// {
//     int  r, n, s, i;
//     printf("Armstrong numbers:\n");

//     for(n=1;n<=1000;n++)
//     {
//         s=0;
//         i=n;
//     while(i!=0)
//     {
//         r=i%10;
//         s=s+r*r*r;
//         i=i/10;
//     }
//     if(n==s)
//         printf("%d\n",n);
//     }
// }




// //program to find out lcm of two numbers
// void main()
// {
//     int a, b, L;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&a,&b);
//     for(L=1;L<=(a*b); L++)
//     {
//         if(L%a==0 && L%b==0)
//             break;
//     }printf("Lcm is %d",L);
// }

// //program to find out hcf
// void main()
// {
//     int a, b, L, H;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&a,&b);
//     for(H=a<b?a:b;H>1;H--)
//         if(a%H==0 && b%H==0)
//         break;

//     printf("Hcf is %d",H);
// }




// // program to check if the given number is prime or not
// void main()
// {
//     int n, i;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0){
//             printf("number is not prime");
//             break;}
//     }
//     if(i==n)
//         printf("Number is prime");
// }



// //program to print all primr numbers between two numberss
// void main()
// {
//     int a, b, i, k;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&a,&b);
//     for(i=a<b?a:b+1;i<=(a>b?a:b)-1;i++)
//     {
//         for(k=2;k<i;k++)
//         {
//             if(i%k==0)
//                 break;
//         }
//         if(k==i)
//             printf("%d\n",i);
//     }
// }

// //program to write all prime factors
// void main()
// {
//     int n, i;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     for(i=2;n>1;i++)
//     {
//         while(n%i==0)
//             {printf("%d\n",i);
//             n=n/i;
//     }}
// }



// // write a program to print fibonacci series
// void main()
// {
//     int i=0,j=1,k, n, s=0;
//     printf("Enter Any Number: ");
//     scanf("%d",&n);
//     printf("fibonacci series is:\n");
//     while(s<n)
//     {
//         k=i+j;
//         printf("%d ",i);
//         i=j;
//         j=k;
//         s++;
//     }
// }

// //Program to find co-prime factors of given numbers
// void main()
// {
//     int i, j, n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     for(i=1;i<n;i++)
//     {
//         for(j=1;j<n;j++)
//         {
//             if(n%i==0 && n%j==0 && i<j && j%i!=0 && i*j==n)
//                 printf("Co-Prime factors of n are : %d and %d\n",i,j);
//         }
//     }
// }

