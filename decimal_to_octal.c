#include<stdio.h>
#include<stdlib.h>
void main()
{
    int  b, i=0, a[32];
    printf("Enter a number : ");
    scanf("%d",&b);
    if(b>=8){
    while(b>=8)
    {
        a[i]=b%8;
        b=b/8;
        if(b>8)
            i++;
        else
            i++;
            a[i]=b;
    }
    // out:
    //printf("%d\n",b);
    printf("Octal Number : ");
    // printf("%d",b);
    while(i>=0)
    {
        //printf("a[%d]=%d\n",i,a[i]);
        
        printf("%d",a[i]);
        i--;
    }
    }
    else{
        printf("Octal Number : %d",b);

    }
}
