#include<stdio.h>
#include<math.h>
int main()
{
    int i, j, temp, a[5];
    printf("Enter Array Elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {   if(a[i]>a[j])
            {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            }
        }
    }
    printf("%d\n%d",i,j);
    printf("\nPrint Array Elements:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
/*void main()
{
    int i=0;
    
    while(i<=255)
    {
        printf("\nThe ASCII value of %c is %d\n",i,i );
        i++;
        
    }
}*/

