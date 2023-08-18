#include <stdio.h>
#include <stdlib.h>
#include <math.h>



// // program to write the elements
// // of given array in reverse order in another array
int main()
{
    int a[5], b[5], i, j;
    printf("Enter five elements of array:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nELements of array\n");
    for (i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    for (i=0,j=4;i<=4,j>=0;i++,j--)
    {
        b[j]=a[i];
    }
    printf("\nsecond array\n");
    for (i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
}



// program to find how many of numbers are odd, even, positive, negative
// void main()
// {
//     int i, a[25],count=0;
//     printf("Enter 25 number:\n");
//     for(i=0;i<25;i++)
//     {
//         scanf("%d ",&a[i]);
//     }
//     for(i=0;i<25;i++)
//     {
//         if(a[i]<0)
//         {
//             count++;
//         }
//     }
//     printf("There are %d number are negative and %d are positive\n",count,25-count);
//     count=0;
//     for(i=0;i<25;i++)
//     {
//         if(a[i]%2==0)
//         {
//             count++;
//         }
//     }
//     printf("There are %d number are even and %d are odd\n",count,25-count);

// }



// program to check if a[i]==a[n-i-1]
// void main()
// {
//     int a[100], i, n;
//     printf("Enter the size of array:\n");
//     scanf("%d",&n);
//     printf("Enter the elements of array:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<(n/2);i++)
//     {
//         if(a[i]==a[n-i-1])
//         {
//             printf("%d index %d, %d index %d\n",a[i],i,a[n-i-1],n-i-1);
//         }
//     }
//     printf("\n%d",n/2);

// }



//program to add two array matrix
// void main()
// {
//     int a[3][3], b[3][3], c[3][3], i, j;
//     printf("Enter 9 elements in first matrix:\n");
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\nEnter 9 elements in second matrix:\n");
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             c[i][j]=a[i][j]+b[i][j];
//         }
//     }
//     printf("First Matrix:\n");
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             printf("%d  ",a[i][j]);
//         }printf("\n");
//     }
//     printf("\nSecond Matrix:\n");
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             printf("%d  ",b[i][j]);
//         }printf("\n");
//     }
//     printf("\nResult Matrix:\n");
//     for(i=0;i<=2;i++)
//     {
//         for(j=0;j<=2;j++)
//         {
//             printf("%d  ",c[i][j]);
//         }printf("\n");
//     }

// }



// program to multiply two array of third order
// void main()
// {
//     int i, j, k, a[3][3], b[3][3], c[3][3], sum;
//     printf("Enter Elements in array a:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter Elements in array b:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             sum = 0;
//             for (k = 0; k < 3; k++)
//             {
//                 sum = sum + a[i][k] * b[k][j];
//             }
//             c[i][j] = sum;
//         }
//     }
//     printf("A matrix: \n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("B matrix: \n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d\t", b[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Product of a and b:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d\t", c[i][j]);
//         }
//         printf("\n");
//     }
// }



// program to insert element in matrix
// void main()
// {
    
//     int i, a[100],n, v, p;
//     printf("Enter the size of array:\n");
//     fflush(stdin);
//     scanf("%d",&n);
//     printf("Enter array elements:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d ",&a[i]);
//     }
//     fflush(stdin);
//     printf("\nArray: \n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     fflush(stdin);
//     printf("\nEnter the position where u want to add element:\n");
//     scanf("%d",&p);
//     printf("\nEnter the value u want to insert:\n");
//     scanf("%d",&v);
//     for(i = (n-1) ; i >= (p-1); i--)
//     {
//         a[i+1]=a[i];
//     }
//     a[p-1]=v;
//     n++;
//     printf("Resultant array\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }
