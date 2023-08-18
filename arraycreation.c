#include<stdio.h>
#include<stdlib.h>
// void rotateclockwise(int *);
// void rotateanticlockwise(int *);
// void MAX(int []);
// int i, n, temp, r;
// // program to rotate array
// void rotateclockwise(int a[0])
// {
//     printf("\nEnter the number of time you want to rotate clockwise array:\n");
//     scanf("%d",&r);
//     while(r!=0)
//     {
//         temp=a[n-1];
//         for(i=n-1;i>=0;i--)
//         {
//             a[i]=a[i-1];
//         }
//         a[0]=temp; 
//         printf("\n Clockwise Rotated Array:\n");
//         for(i=0;i<n;i++)
//         {
//             printf("%d ",a[i]);
//         }
//         printf("\n");
//         r--;
//     }
// }
// void rotateanticlockwise(int a[0])
// {
//    printf("\nEnter the number of time you want to rotate Anticlockwise array:\n");
//     scanf("%d",&r);
//     while(r!=0)
//     {
//         temp=a[0];
//         for(i=0;i<n;i++)
//         {
//             a[i]=a[i+1];
//         }
//         a[n-1]=temp;
//         printf("\nAnticlockwise Rotated Array:\n");
//         for(i=0;i<n;i++)
//         {
//             printf("%d ",a[i]);
//         }
//         printf("\n");
//         r--;
//     } 
// }


// void main()
// {
//     int a[100];
//     printf("Enter the size of array:\n");
//     scanf("%d",&n);
//     printf("Enter the %d elements of array:\n",n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Elements of Array:\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     rotateclockwise(&a[0]);
//     rotateanticlockwise(&a[0]);
//     MAX(&a[0]);
    
// }

// // Program to find max number
// void MAX(int a[0])
// {
//     int max;
//     max=a[0];
//     for(i=0;i<n;i++)
//     {
//         if(max<=a[i])
//         {
//             max=a[i];
//         }
//     }
//     printf("\nMaximum Number is %d\n",max);
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
void main()
{
    int i, j, k, sum, a[3][3], b[3][3], c[3][3];
    printf("Enter elements of first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEnter elements of second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
                sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    }
    printf("\nFirst Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
           {printf("%d ",a[i][j]);
    }printf("\n");
    }
    printf("\nSecond matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {printf("%d ",b[i][j]);
    }printf("\n");
    }
    printf("\nEnter elements of resultant matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }

}

// program to search elements in array
// void main()
// {
//     int i, size, num, a[100];
//     printf("Enter the size of array: ");
//     scanf("%d",&size);
//     printf("Insert numbers in array:\n");
//     for(i=0;i<size;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter a Number you want to touch:\n",num);
//     scanf("%d",&num);
//     for(i=0;i<size;i++)
//     {
//         if(a[i]==num)
//            {

//            printf("Number %d is at index value %d .",num,i);

//             break;}
//     }
//    /* printf("%d\n",i);*/
//     if(i==size)
//         printf("Number does not exist in array");
    
// }

// //program to sort elements in array
// int main()
// {
//     int i, j, temp, a[5];
//     printf("Enter Array Elements:\n");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<5;i++)
//     {
//         for(j=i+1;j<5;j++)
//         {   if(a[i]>a[j])
//             {
//              temp=a[i];
//              a[i]=a[j];
//              a[j]=temp;
//             }
//         }
//     }
//     printf("%d\n%d",i,j);
//     printf("\nPrint Array Elements:\n");
//     for(i=0;i<5;i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }



// program to insert element in array using static memory allocation
// void main()
// {
//     int i, a[100],n, v, p;
//     printf("Enter the size of array:\n");
//     scanf("%d",&n);
//     fflush(stdin);
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
//     printf("\nEnter the position where u want to add element:\n");
//     scanf("%d",&p);
//     fflush(stdin);
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


// // // program to write the elements
// // // of given array in reverse order in another array
// int main()
// {
//     int a[5], b[5], i, j;
//     printf("Enter five elements of array:\n");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\nELements of array\n");
//     for (i=0;i<5;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     for (i=0,j=4;i<=4,j>=0;i++,j--)
//     {
//         b[j]=a[i];
//     }
//     printf("\nsecond array\n");
//     for (i=0;i<5;i++)
//     {
//         printf("%d ",b[i]);
//     }
// }

// //program to traverse an array
// void main()
// {
//     int i, j, arr[4][3];
//     printf("Enter element in array:\n");
//     fflush(stdin);
//     for(i=0;i<4;i++)
//     {
//      for(j=0;j<3;j++)
//     {
//         scanf("%d\n",&arr[i][j]);
//     }
    
//     }
//     printf("Print array element:\n");
//     for(i=0;i<4;i++)
//     {
//      for(j=0;j<3;j++)
//     {
//         printf("%d\t",arr[i][j]);
//     }
//     printf("\n");
//     }
// }

// // program to sort array 
// void main()
// {
//     int i, j, a[100], n, temp;
//     printf("Enter the size of array: \n");
//     scanf("%d",&n);
//     printf("Enter the elments of array:\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\ninput Array\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//        for(j=i+1;j<n;j++)
//        {
//             if(a[i]>a[j])
//             {
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//        } 
//     }
//     printf("\nSorted array:\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }


// // program to delete element from array
// void main()
// {
//     int i, n, item, pos;
//     int arr[50];
//     printf("Enter the size of array:\n");
//     scanf("%d",&n);
//     printf("Enter %d Elements in array:\n",n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("\nEntered Array\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\nEnter the position of element you want to delete:\n");
//     scanf("%d",&pos);
//     for(i=pos-1;i<n-1;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     n=n-1;
//     printf("\nUpdated Array\n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }

