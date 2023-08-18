#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
// void main()
// {
//     int a, b;
//     float p, q;
//     char choice;
//     printf("menu:\na. Addition\nb. Subtraction\nc. Multiplication\nd. Divisoion\ne. Remainder\n");
//     while(1)
//     {printf("\n\n\nEnter Your Choice: ");
//     scanf("%c",&choice);
//     switch(choice)
//     {
//         case 'a': printf("\nEnter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 printf("Sum is %d",a+b);
//                 break;
//         case 'b': printf("\nEnter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 printf("Subtraction is %d",a-b);
//                 break;
//         case 'd': printf("\nEnter two numbers: ");
//                 scanf("%f%f",&p,&q);
//                 if(q==0)
//                     printf("undifined");
//                 else
//                     printf("Divide is %f",p/q);
//                 break;
//         case 'c': printf("\nEnter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 printf("Multiply is %d",a*b);
//                 break;
//         case 'e': printf("\nEnter two numbers: ");
//                 scanf("%d%d",&a,&b);
//                 if(b==0)
//                     printf("undifined");
//                 else
//                     printf("Remainder is %d",a%b);
//                 break;
//         default:printf(" your choice is wrong");
//     }
//     }
// }

// void main()
// {
//     int n, w;
//     printf("Enter the number of month: ");
//     scanf("%d",&n);
//     printf("Enter the number of Day : ");
//     scanf("%d",&w);
//     if(n==1)
//         printf("January");
//     if(n==2)
//         printf("February");
//     if(n==3)
//         printf("March");
//     if(n==4)
//         printf("April");
//     if(n==5)
//         printf("May");
//     if(n==6)
//         printf("June");
//     if(n==7)
//         printf("July");
//     if(n==8)
//         printf("August");
//     if(n==9)
//         printf("Sepetmber");
//     if(n==10)
//         printf("October");
//     if(n==11)
//         printf("November");
//     if(n==12)
//         printf("December");
//     if(w==1)
//         printf("\nMonday");
//     if(w==2)
//         printf("\nTuesday");
//     if(w==3)
//         printf("\nWednesday");
//     if(w==4)
//         printf("\nThursday");
//     if(w==5)
//         printf("\nFriday");
//     if(w==6)
//         printf("\nSaturday");
//     if(w==7)
//         printf("\nSunday");
//     if(n>12)
//         printf("\ninvalid month");
//     if(w>7)
//         printf("\ninvalid day");
// }



// void main()
// {
//     int i, j, k, n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     if(n<100)
//     {
//         if(n>50)
//         {
//             printf("Number is greater than 50 and lesser than 100");
//         }
//         else
//             printf("Number is lesser than 50");
//     }
//     else
//         printf("Number is greater than 100");
// }

// // write  program to check if the year is leap or not
// void main()
// {
//     int y;
//     while(1)
//     {printf("\n\nEnter year: ");
//     scanf("%d",&y);
//     if(y%100==0)
//     {
//         if(y%400==0)
//             printf("Year is leap year");
//         else
//             printf("Year is not leap year");
//     }
//     else
//     {
//         if(y%4==0)
//             printf("Year is leap year");
//         else
//             printf("Year is not leap year");
//     }
//     }
// }
// // ckeck if the number is greater than 0 and lesser than 10 and even
// void main()
// {
//     int n;
//     printf("Enter any number: ");
//     scanf("%d",&n);
//     if(n>0 && n<10 && n%2==0)
//     {
//         printf("number is valid");// number has tobe under limit and also even
//     }
//     else
//         printf("invalid number");
// }
//  //write a rogram to reverse a number

// void main()
//  {
//      int n, s, r;
//      printf("Enter a number: ");
//      scanf("%d",&n);
//      while(n>0)
//      {
//          r=n%10;
//          s=s*10+r;
//          n=n/10;
//      }
//      printf("Reverse of a number is %d",s);
//  }


 // Question by Priyesh Gaur of prime choice
//  void main()
// {
//      int a, b, c, i;
//      printf("Enter two numbers: ");
//      scanf("%d%d",&a,&b);
//      for(c=1;;c++)
//      {
//          for(i=2;i<a+b+c;i++)
//          {
//              if((a+b+c)%i==0)
//                 break;
//          }
//          if(i==(a+b+c))
//             {printf("%d",c);
//             break;}
//      }
//      printf("The no. of potatos taken from field are %d , %d and %d",a,b,c);
//}




// // program to write a reverse number using function and structure
//  struct id
//  {
//      int x;
//      int y;
//      int z;
//  };
//  void reverse();
//  void main()
//  {
//      reverse();
//  }
//  void reverse()
//  {

//      struct id a;
//      printf("Enter a number: ");
//      scanf("%d",&a.x);
//      a.z=0;
//      while(a.x!=0)
//      {
//          a.y=a.x%10;
//          a.x=a.x/10;
//          a.z=a.z*10+a.y;
//      }
//      printf("Reverse number is : %d",a.z);
//  }

//  //factorial using recursion
//  int fact(int );
//  void main()
//  {
//      int n;
//      printf("Enter the number for factorial: ");
//      scanf("%d",&n);
//      printf("Factorial of given number is %d",fact(n));
//  }
//  int fact(int n)
//  {
//      int i;
//      if(n==0)
//         return 1;
//      else
//      {
//          i=n*fact(n-1);
//          return i;
//      }

//  }



//  // factorial using while loop
//  void main()
//  {
//      int n, fact=1;
//      printf("Enter a number: ");
//      scanf("%d",&n);
//      while(n>0)
//      {
//          fact=fact*n;
//          n--;
//      }
//      printf("Factorial of given number is %d", fact);
//  }



// // factorial using do-while loop
// void main()
//  {
//      int n, fact=1;
//      printf("Enter a number for factorial: ");
//      scanf("%d",&n);
//      do
//      {
//          fact=fact*n;
//          n--;
//      }while(n>0);
//      printf("Factorial of given number is %d",fact);
//  }
//  // program to print integer number using do-while loop
//  void main()
//  {
//      int n=1;
//      do
//      {
//          printf("%d ",n);
//          n++;
//      }while(n<=10);
//  }

// int main()
// {
//     int i=0;
//     do{
//         printf("Hello");

//     }while(++i);
// }
// // program to input number in array and finding out the sum of odd and even numbers
// void main()
// {
//     int i, SO=0, SE=0, a[10];
//     printf("Enter 10 numbers: ");
//     for(i=0;i<10;i++)
//     {scanf("%d",&a[i]);}
//     for(i=0;i<10;i++)
//     {
//         if(a[i]%2==0)
//             SE=SE+a[i];
//         else
//             SO=SO+a[i];
//     }
//     printf("\nSum of even is %d",SE);
//     printf("\nSum of odd is %d",SO);
// }
// // programto find greatest number
// void main()
// {
//     int i, max, a[10];
//     printf("Enter 10 numbers: \n");
//     for(i=0;i<10;i++)
//         scanf("%d",&a[i]);
//     max=a[0];
//     for(i=1;i<10;i++)
//     {
//         if(max<a[i])
//             max=a[i];
//     }
//     printf("greatest number is %d",max);
// }

// //program to find smallest among 10 numbers
// void main()
// {
//     int i, min, a[10];
//     printf("Enter 10 numbers:\n");
//     for(i=0;i<10;i++)
//         scanf("%d",&a[i]);
//     min=a[0];
//     for(i=1;i<10;i++)
//     {
//         if(min>a[i])
//             min=a[i];
//     }
//     printf("\nsmallest number is %d",min);
// }




// //program to add two matrix
// void main()
// {
//     int i, j, a[3][3],b[3][3];
//     printf("Enter elements of first matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//             scanf("%d",&a[i][j]);
//     }
//     printf("\nEnter elements of second matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//             scanf("%d",&b[i][j]);
//     }
//     printf("\nFirst Matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//            {printf("%d ",a[i][j]);
//     }printf("\n");
//     }
//     printf("\nSecond matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//             {printf("%d ",b[i][j]);
//     }printf("\n");
//     }
//     printf("\n Sum of both matrix: \n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             a[i][j]=a[i][j]+b[i][j];
//             printf("%d ",a[i][j]);
//         }printf("\n");
//     }
// }
// // program to multiply two matrix
// void main()
// {
//     int i, j, k, sum, a[3][3], b[3][3], c[3][3];
//     printf("Enter elements of first matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//             scanf("%d",&a[i][j]);
//     }
//     printf("\nEnter elements of second matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//             scanf("%d",&b[i][j]);
//     }
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//             sum=0;
//             for(k=0;k<3;k++)
//                 sum=sum+a[i][k]*b[k][j];
//             c[i][j]=sum;
//         }
//     }
//     printf("\nFirst Matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//            {printf("%d ",a[i][j]);
//     }printf("\n");
//     }
//     printf("\nSecond matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//             {printf("%d ",b[i][j]);
//     }printf("\n");
//     }
//     printf("\nEnter elements of resultant matrix:\n");
//     for(i=0;i<3;i++)
//     {
//         for(j=0;j<3;j++)
//             printf("%d ",c[i][j]);
//         printf("\n");
//     }

// }
// void main()
// {
//     int i, j, min, max, temp, a[10];
//     min=10;
//     max=min+9;
//    // srand();
//     for(i=0;i<=9;i++)
//     {
//         temp=rand()%10+min;
//         for(j=0;j=i-1;j++)
//         {
//             if(temp==a[j])
//                 break;
//         }
//         if(i==j)
//             a[i]=temp;
//         else
//             i--;
//     }
//     for(i=0;i<=9;i++)
//         printf("%d",a[i]);

// }
// struct node
// {
//     int info;
//     int *prev, *next;
// };
// struct node *head=NULL;
// void insertfirstnode()
// {
//     struct node *n;
//     n=(struct node*)malloc(sizeof(struct node));
//     printf("Enter a number: ");
//     scanf("%d",&n->info);
//     n->prev = NULL;
//     n->next = NULL;
//     if(head==NULL)
//     {
//         head = n;
//     }
//     else
//     {
//         head->prev = n;
//         n->next = head;
//         head = n;
//     }
// }
// void deletefirstnode()
// {
//     struct node *r;
//     if(head==NULL)
//     {
//         printf("List is Empty");
//     }
//     else
//     {
//         r=head;
//         head = head->next;
//         head->prev = NULL;
//         free(r);
//     }
// }
// void viewlist()
// {
//     struct node *t;
//     if(head==NULL)
//     {
//         printf("List is Empty");
//     }
//     else
//     {
//         t=head;
//         while(t!=NULL)
//         {
//             printf("%d",t->info);
//             t = t->next;
//         }
//     }
// }
// int menu()
// {
//     int ch;
//     printf("\n1. insert element in link list");
//     printf("\n2. delete element in list");
//     printf("\n3. view list");
//     printf("\n4. exit");
//     printf("\nEnter your choice\n");
//     scanf("%d",&ch);
//     return(ch);
// }
// void main()
// {
//     while(1)
//     {
//         switch(menu())
//         {
//             case 1:
//                 insertfirstnode();
//                 break;
//             case 2:
//                 deletefirstnode();
//                 break;
//             case 3:
//                 viewlist();
//                 break;
//             case 4:
//                 exit(0);
//             default:
//                 printf("Invalid choice");

//         }
//     }
// }





// // program to find out hcf of two numbers
// void main()
// {
//     int a, b, H;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&a,&b);
//     for(H=(a<b?a:b);H>=1;H--)
//     {
//         if(a%H==0 && b%H==0)
//            {printf("HCF is %d",H);
//            break;}
//     }
// }



// //program to print a pattern
// void main()
// {
//     int i, n,j;
//     printf("Enter row number: ");
//     scanf("%d",&n);
//     i=1;
//     while(i<=n)
//     {
//         j=1;
//         while(j<=i)
//         {
//             printf("%d",i);
//             j++;
//         }printf("\n");
//         i++;
//     }
// }




// void main()
// {
//     int i, n;
//     while(i!=n)
//     {
//         srand(time(NULL));
//         i=rand() % 101;
//         printf("\nSystem has generated a random number i, Guess what is the number n: ");
//         scanf("%d",&n);
//         if(i>n)
//         {
//             printf("Too low, try again i=%d n=%d",i,n);
//         }
//         else if(i<n)
//         {
//             printf("Too high, try again i=%d n=%d",i,n);
//         }
//         else
//         {
//             printf("Your guess is correct i=%d n=%d",i,n);
//         }

//     }
// }
