#include <stdio.h>
// #include<math.h>
#include <stdlib.h>
//program to print ascii code from 0 to 255
/*void main()
{
    int i=0;

    while(i<=255)
    {
        printf("\nThe ASCII value of %c is %d\n",i,i );
        i++;

    }
// program for finding arm strong number between 1 to 500
/*void main()
{
    int x=0, y=0, z=0, xyz, a;
    for(x=0;x<=4;x++)
    {
        for(y=0;y<=9;y++)
        {
            for(z=0;z<=9;z++)
            {
                a=(x*x*x)+(y*y*y)+(z*z*z);
                xyz=(x*100+y*10+z);
                if(xyz==a)
                {
                    printf("Arm strong %d\n",xyz);
                }
                else
                {
                    printf(" not arm strong %d\n",xyz);
                }
            }
        }
    }
    return 0;
}*/
//program for entering a number and finding their count
/*void main()
{
    int i, a;
    char x;
    printf("Want to enter numbers y/n: ");
    scanf("%c",&x);

    if(x=='y')
    {for(i=1;i<1000;i++)
    {
        printf("enter the number : ");
        scanf("%d",&a);
        fflush(stdin);
        printf("Want to continue y/n: ");
        scanf("%c",&x);
        fflush(stdin);
        if(x=='y')
            continue;
        else
            goto out;
    }
    }
    out:
        printf("Counting of numbers entered: %d",i);
}*/
//program to find the range of numbers
/*void main()
{
    int a[10], i, j, temp, r;
    printf("enter the numbers:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {   if(a[i]>a[j])
            {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
            }
        }
    }
    r=a[9]-a[0];
    printf("\nrange: %d",r);
}*/


// void main()
// {
//     int i, j;
//     while()
//     {
//         printf("user's pick: ");
//         scanf("%d",&i);
//         if()
//     }
// }
// program to count vowel in sentence given by user
#include<string.h>
void main()
{
    int i, count=0, L;
    char s[500];
    printf("Enter any sentence: ");
    gets(s);
    L=strlen(s);
    printf("L value: %d\n",L);
    for(i=0;i<L;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='A' || s[i]=='E')
            count++;
    }
    printf("count of vowel: %d",count);
}


