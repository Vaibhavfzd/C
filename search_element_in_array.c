#include<stdio.h>
#include<math.h>
void main()
{
    int i, size, num, a[100];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Insert numbers in array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a Number",num);
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(a[i]==num)
           {

           printf("Number %d is at position %d .",num,i);

            break;}
    }
   /* printf("%d\n",i);*/
    if(i==size)
        printf("Number does not exist in array");
    return 0;
}
