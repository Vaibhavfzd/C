#include<stdio.h>

//program to traverse an array
void main()
{
    int i, j, arr[4][3];
    printf("Enter element in array:\n");
    for(i=0;i<4;i++)
    {
     for(j=0;j<3;j++)
    {
        scanf("%d\n",&arr[i][j]);
    }
    }
    printf("Print array element:\n");
    for(i=0;i<4;i++)
    {
     for(j=0;j<3;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
    }

    return 0;
}
